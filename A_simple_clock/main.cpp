#include <iostream>

#include<iomanip>

#include "Time.h"
using namespace std;

int main()
{
    Time t1;
    t1.printTime();
    Time t2(t1);
    t2.printTime();

    t2.setTime(59,59,24);
    t2.printTime();
    t2.nextSecond();
    t2.printTime();

    return 0;
}
