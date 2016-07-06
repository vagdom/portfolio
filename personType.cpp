//From: Data Structures Using C++
//Author: D. S. Malik

void personType::print() const
{
    cout << firstName << " " << lastName;
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
