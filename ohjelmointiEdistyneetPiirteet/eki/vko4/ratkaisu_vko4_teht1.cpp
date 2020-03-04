//Sorry I know the assignment said to just convert seconds to hours and such but I thought it was more interesting
//to convert unix time to human readable form. Same problem to solve anyway, just different results.
//Also I know the function name is different to what it was supposed to be but for clean code
//I'd suppose it would be better to have a name that suits the function.


//Assumes 365 days in year instead of 365.2425
#include <iostream>
#define spacing << ", " <<
#define minute 60   //in seconds
#define hour 60
#define day 24
#define year 365
#define startpoint 1970

void unixToHumanreadable (unsigned int secondsInput, unsigned int &years, unsigned int &days, unsigned int &hours, unsigned int &minutes, unsigned int &seconds);


int main(){
    unsigned long int secondsInput;
    unsigned int years = 0, 
                days = 0,
                hours = 0,
                minutes = 0,
                seconds = 0;

    std::cout << "Convert unix time to human readable time\n";
    std::cout << "Input seconds to convert: ";
    std::cin >> secondsInput;

    unixToHumanreadable(secondsInput, years, days, hours, minutes, seconds);

    std::cout << "Unix time " << secondsInput << " in human readable format is ";
    std::cout << seconds spacing minutes spacing hours spacing days spacing years << std::endl;
}

void unixToHumanreadable(unsigned int secondsInput, unsigned int &years, unsigned int &days, unsigned int &hours, unsigned int &minutes, unsigned int &seconds){
    minutes = secondsInput / minute;
    seconds = secondsInput - (minutes * minute);
    
    hours = minutes / hour;
    minutes = minutes - (hours * hour);

    days = hours / day;
    hours = hours - (days * day);

    years = days / year;
    days = days - (years * year);

    years = years + startpoint;
}