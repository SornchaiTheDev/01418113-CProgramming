#include <iostream>
#include <cmath>
#include <string>

using namespace std;

class Time
{
private:
    int hour, minute, second;

public:
    int getHour() { return hour; }

    int getMinute() { return minute; }

    int getSecond() { return second; }

    void setHour(int hour) { this->hour = hour; }

    void setMinute(int minute) { this->minute = minute; }

    void setSecond(int second) { this->second = second; }

    Time(int hour, int minute, int second)
    {
        this->hour = hour;
        this->minute = minute;
        this->second = second;
    }

    Time(int duration)
    {
        int hour = (duration / 3600) % 60;
        int minute = (duration / 60) % 60;
        int second = duration % 60;
        this->hour = hour;
        this->minute = minute;
        this->second = second;
    }

    int getDuration()
    {
        return (hour % 24 * 60 * 60) + minute * 60 + second;
    }

    Time add(Time other)
    {
        Time tmp(hour, minute, second);
        tmp.hour += other.hour;
        tmp.minute += other.minute;
        tmp.second += other.second;
        return Time(tmp.getDuration());
    }

    int subtract(Time other)
    {
        Time tmp(hour, minute, second);
        int duration = tmp.getDuration() - other.getDuration();

        if (duration >= 0)
        {
            return duration;
        }
        else
        {
            return duration + 86400;
        }
    }

    int equals(Time other)
    {
        if (hour == other.hour && minute == other.minute && second == other.second)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

    string toString()
    {
        string result = "";
        int duration = this->getDuration();
        int hour = (duration / 3600);
        int minute = (duration / 60) % 60;
        int second = duration % 60;
        if (hour >= 10)
        {
            result += to_string(hour);
        }
        else
        {
            result += "0" + to_string(hour);
        }
        result += ":";
        if (minute >= 10)
        {
            result += to_string(minute);
        }
        else
        {
            result += "0" + to_string(minute);
        }
        result += ":";
        if (second >= 10)
        {
            result += to_string(second);
        }
        else
        {
            result += "0" + to_string(second);
        }
        return result;
    }
};

int main()
{

    // cout << Time(12, 34, 0).toString() << endl;

    Time t1(555);

    cout << t1.toString() << endl;

    // cout << t1.subtract(t2) << endl;
    // cout << t2.subtract(t1) << endl;
    // cout << t2.equals(t3) << endl;
    // cout << t3.equals(t2) << endl;
    // cout << t1.equals(t2) << endl;
    // cout << t1.add(Time(1, 2, 3)).toString() << endl;
    // cout << Time(12, 0, 0).add(Time(12, 10, 0)).toString() << endl;
    // cout << t1.getDuration() << endl;
    // cout << t2.getDuration() << endl;
    // cout << t4.getDuration() << endl;
    // cout << t1.toString() << endl;
    // cout << t2.toString() << endl;
    // cout << t3.toString() << endl;
    // cout << t4.toString() << endl;
    // cout << t5.toString() << endl;
}
