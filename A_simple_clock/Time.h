//declaration of member function and variables of Class time.

#ifndef TIME_H
#define TIME_H


class Time
{
    public:

        Time(int second=0, int minute=0, int hour=0);
        virtual ~Time();
        int getSecond()const;
        int getMinute()const;
        int getHour()const;
        void setSecond(int second);
        void setMinute(int minute);
        void setHour(int hour);
        void printTime() const;
        void setTime(int second, int minute, int hour);
        void nextSecond();

    protected:

    private:


    int second;
    int minute;
    int hour;
};

#endif // TIME_H
