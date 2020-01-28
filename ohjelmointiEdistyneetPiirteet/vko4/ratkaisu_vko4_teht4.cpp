#include <iostream> 
#define spacing << ":" <<
#define minute 60   //in seconds
#define hour 60     //in minutes
#define day 24      //in hours
#define year 365    //in days


struct timestruct{
    int seconds,
        minutes,
        hours;
};

timestruct secondsToHumanreadable (unsigned int secondsInput, timestruct time);
int humanreadableToSeconds (timestruct time);
timestruct timeDifference(timestruct time, timestruct time1, timestruct timeReturn);

int main(){
    timestruct time,
                time1,
                timeReturn;

    std::cout << "1. Input hours: ";
    std::cin >> time.hours;
    while (time.hours >= day){
        std::cout << "Error, try again\nInput hours: ";
        std::cin >> time.hours;
    }
    
    std::cout << "1. Input minutes: ";
    std::cin >> time.minutes;
    while (time.minutes >= hour){
        std::cout << "Error, try again\nInput minutes: "; 
        std::cin >> time.minutes;
    }
    
    std::cout << "1. Input seconds: ";
    std::cin >> time.seconds;
    while(time.seconds >= minute){
        std::cout << "Error, try again\nInput seconds: ";
        std::cin >> time.seconds;
    }


        std::cout << "\n\n2. Input hours: ";
    std::cin >> time1.hours;
    while (time1.hours >= day){
        std::cout << "Error, try again\nInput hours: ";
        std::cin >> time1.hours;
    }
    
    std::cout << "2. Input minutes: ";
    std::cin >> time1.minutes;
    while (time1.minutes >= hour){
        std::cout << "Error, try again\nInput minutes: "; 
        std::cin >> time1.minutes;
    }
    
    std::cout << "2. Input seconds: ";
    std::cin >> time1.seconds;
    while(time1.seconds >= minute){
        std::cout << "Error, try again\nInput seconds: ";
        std::cin >> time1.seconds;
    }



    timeReturn = timeDifference(time, time1, timeReturn);
    std::cout << "\n\n The difference between 2 given times is:\n";
    std::cout << timeReturn.hours spacing timeReturn.minutes spacing timeReturn.seconds << std::endl;










    return 0;
}

timestruct timeDifference(timestruct time, timestruct time1, timestruct timeReturn){
    unsigned int secondsTime,
                secondsTime1;

    secondsTime = humanreadableToSeconds(time);
    secondsTime1 = humanreadableToSeconds(time1);

    if (secondsTime > secondsTime1){
        secondsTime = secondsTime - secondsTime1;
    } else if (secondsTime < secondsTime1){
        secondsTime = secondsTime1 - secondsTime;
    }

    timeReturn = secondsToHumanreadable(secondsTime, timeReturn);
    return timeReturn;
}


timestruct secondsToHumanreadable(unsigned int secondsInput, timestruct time){
    time.minutes = secondsInput / minute;
    time.seconds = secondsInput - (time.minutes * minute);
    
    time.hours = time.minutes / hour;
    time.minutes = time.minutes - (time.hours * hour);
    
    return time;
}

int humanreadableToSeconds (timestruct time){
    time.minutes = time.minutes + (time.hours * hour);
    time.seconds = time.seconds + (time.minutes * 60);
   
    int seconds = time.seconds;
    return seconds;
}