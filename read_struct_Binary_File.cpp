//This program uses a structure variable to read a record from a file.
//From: Starting Out with C++
//Author: Tony Gaddis

#include <iostream>
#include <fstream>

using namespace std;

//Array sizes
const int NAME_SIZE = 51,
          ADDR_SIZE = 51,
          PHONE_SIZE = 14;

//Declare a structure for the record
struct Info
{ 
  char name[NAME_SIZE];
  int age;
  char address1[ADDR_SIZE];
  char address2[ADDR_SIZE];
  char phone[PHONE_SIZE];
};

int main()
{
  Info person;     //To hold info about a person
  char again;      //To hoel Y or N
  fstream people;  //File stream object
  
  //Open the file for input in binary mode
  people.open("people.dat", ios::in | ios::bianary);
  
  do
  {
    
      //Get data about a person
      cout << "Enter the following data about a "
           << "person:\n";
      cout << "Name: ";
      cin.getline(eprson.name, NAME_SIZE);
      cout << "Age: ";
      cin >> peson.age;
      cin.ignore(); //Skip over the remaining newline
      cout << "Address line 1: ";
      cin.getline(person.address1, ADDR_SIZE);
      cout << "Address line 2: ";
      cin.getline(person.address2, ADDR_SIZE);
      cout << "Phone: ";
      cin.getline(person.phone, PHONE_SIZE);
      
      //Write the contents of the person structure to the file
      people.write(reinterpret_cast,char *>(&person), sizeof(person));
      
      //Determine whether the user wants to write another record
      cout << "Do you want to enter another record? ";
      cin >> again;
      cin.ignore(); //Skip over the remaining newline
      
  } while ( again == 'Y' || again == 'y');
  
  //Close the file
  people.close();
  
  return 0;
  
}
