//From: Data Structures Using C++
//Author: D. S. Malik

#include <iostream>

using namespace std;

void personType::print() const
{
    cout << firstName << " " << lastName;
} 

personType& personType::setFirstName(string first)
{
    firstName = first;
    return *this;
}

personType& personType::setLastName(string last)
{
    lastName = last;
    return *this;
}

void personType::setName(string first, string last)
{
    firstName = first;
    lastName = last;
}

void personType::getName(string& first, string& last)
{
    first = firstName;
    last = lastName;
}

//Constructor
personType::personType(string first, string last)
{
    firstName = first;
    lastname = last;
}
