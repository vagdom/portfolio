//From: Data Structures Using C++
//Author: D. S. Malik

//Header file personType.h
#ifndef H_personType
#define H_personType
#include <string>

using namespace std;

class personType
{
public:
  void print() const;
  //Function to output the first name and last name
  //in the form firstName lastname.
  
  void setName(string first, string last);
  //Function to set firstName and lastName according
  //to the parameters.
  //Postcondition: first = firstName; last = lastName
  
  personType& setFirstName(string first)
  //Function to set the first name.
  //Postcondition: firstName = first
  //               After setting the first name, a reference
  //               to the object, that is, the address of the
  //               object, is returned.
  
  personType& setLastName(string last)
  //Function to set the last name.
  //Postcondition: lastName = last
  //               After setting the last name, a reference
  //               to the object, that is, the address of the
  //               object, is returned.
  
  void getName(string& first, string& last);
  //Function to return firsttName and lastName via
  //the parameters.
  //Postcondition: first = firstname; last = lastName
  
  personType(string first = "", string last = "");
  //Constructor
  //Sets firstName and lastName according to the
  //parameters.
  //The default values of the parameters are empty
  //strings.
  //Postcondition: firstName = first; lastname = last
  
private:
  string firstName;       //stores the first name
  string lastName;        //stores the last name
  
  
};
#endif
