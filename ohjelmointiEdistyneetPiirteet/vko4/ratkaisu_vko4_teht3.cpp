#include <iostream>
#include <string.h>
#define day 24 //in hours
#define hour 60 //in minutes
#define minute 60 //in seconds
#define spacing << ":" <<


struct timestruct{
    int seconds,
        minutes,
        hours;
};

int main(){
    timestruct time,
                time1,
                time2;

    std::cout << "Input hours: ";
    std::cin >> time.hours;
    while (time.hours >= day){
        std::cout << "Error, try again\nInput hours: ";
        std::cin >> time.hours;
    }
    
    std::cout << "Input minutes: ";
    std::cin >> time.minutes;
    while (time.minutes >= hour){
        std::cout << "Error, try again\nInput minutes: "; 
        std::cin >> time.minutes;
    }
    
    std::cout << "Input seconds: ";
    std::cin >> time.seconds;
    while(time.seconds >= minute){
        std::cout << "Error, try again\nInput seconds: ";
        std::cin >> time.seconds;
    }

    std::cout << "Reading from struct\n\n";
    std::cout << time.hours spacing time.minutes spacing time.seconds << std::endl;



    
    struct timestruct *ptr;
    ptr = &time;
    std::cout << "\nReading from struct using ptr\n\n";
    std::cout << ptr->hours spacing ptr->minutes spacing ptr->seconds << std::endl;


    time1 = {12, 16, 18};

    std::cout << "\nReading time1 struct\n\n";
    std::cout << time1.hours spacing time1.minutes spacing time1.seconds << std::endl;

    time2 = time1;

    if (time1.seconds == time2.seconds && time1.minutes == time2.minutes && time1.hours == time2.hours){
        std::cout << "Copy successful\n";
    }
    else{
        std::cout << "no worky worky\n";
    }

    return 0;
}