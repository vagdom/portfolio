//From: Data Structures Using C++
//Author: D. S. Malik
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
