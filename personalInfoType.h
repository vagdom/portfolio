//From: Data Structures Using C++
//Author: D. S. Malik
class personalInfoType
{
  public:
      void setPersonalInfo(string first, string last,
                           int month, int day,
                           int year, int ID);
          //Function to set the personal information.
          //Data members are set according to the 
          //parameters.
          //Postcondition: firstName = first; 
          //               lastName = last;
          //               dDay = day; dMonth = month;
          //               dYear = year; personID = ID
      
      void printPersonalInfo() const;
          //Function to print the personal information.
          
      personalInfoType(string first = "", string last = "",
                       int month = 1, int day = 1,
                       int year = 1900, int ID = 0);
          //Constructor
          //Data members are set according to the 
          //parameters.
          //Postcondition: firstName = first; 
          //               lastName = last;
          //               dDay = day; dMonth = month;
          //               dYear = year; personID = ID 
        
  private:
      personType name;
      dateType bDay;
      int personID;
};  
  
