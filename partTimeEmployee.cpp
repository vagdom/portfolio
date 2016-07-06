//From: Data Structures Using C++
//Author: D.S. Malik

#include <iostream>
#include "partTimeEmployee.h"

using namespace std;

void parTimeEmployee::print()
{
    personType::print();    //print the name of the
                            //employee
    cout << " wages are: " << calculatePay() << endl;                        
}

void parTimeEmployee::calculatePay()
{
    return (payRate * hoursWorked); 
}   

void parTimeEmployee::setNameRateHours(string first, string last,
                                       double rate, double hours)
{
    personType::setName(first, last);
    payRate = rate;
    hoursWorked = hours;
}  

parTimeEmployee::partTimeEmployee(string first, string last,
                                  double rate, double hours)
                                  : personType(first, last);    //personType constructor
{
    
    payRate = rate;
    hoursWorked = hours;
}                                  

