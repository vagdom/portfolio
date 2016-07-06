//From: Data Structures Using C++
//Author: D. D. Malik

#include <iostream>

using namespace std;

dateType::setDate(int month, int day, int year)
{
    dMonth = month;
    dDay = day;
    dYear = year;
}  

void dateType::getDate(int& month, int& day, int& year)
{
    month = dMonth;
    day = dDay;
    year = dYear;
}

void dateType::printDate()
{
    cout << dMonth << "-" << dDay << "-" << dYear;
}

dateType::dateType(int month, int day, int year)
{
    setDate(month, day, year);
}
