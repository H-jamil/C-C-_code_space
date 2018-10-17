#include <iostream>
#include <iomanip>
#include "Time.h"
using namespace std;


Time::Time(int second, int minute, int hour): second(second),minute(minute),hour(hour){}

Time::~Time()
{

    cout << "Destructor is being called" <<endl;
}


int Time::getSecond()const{

         return this->second;
        }
int Time::getMinute()const{

        return this->minute;
        }
int Time::getHour()const{

        return this->hour;
        }

void Time::setSecond(int second){

        this->second=second;
        }
void Time::setMinute(int minute){


        this->minute=minute;
        }
void Time::setHour(int hour){

        this->hour=hour;
        }
void Time::printTime() const{

        cout << "Hour is= " << Time::getHour() <<" Minute is=" << Time::getMinute() <<" second is="<<Time::getSecond()<<endl;
        cout<<setfill('0');
        cout <<setw(2)<<hour<<":" <<setw(2)<<minute<<":"<<setw(2)<<second<<endl;
        }
void Time::setTime(int second, int minute, int hour){

        if(second<61 && second>0)
        {this->second=second;}

        if(minute<61 && minute>0)
        {this->minute=minute;}

        if (hour<25 && hour>0)
        {this->hour=hour;}

        }




void Time::nextSecond(){

        ++second;
        if(second==60)
            {
             second=0;
             ++minute;
            }

        if(minute==60)
            {
            minute=0;
            ++hour;

            }
        if (hour> 24)
            {

            hour=0;

            }
      }
