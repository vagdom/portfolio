class dateType
{
  public:
      void setDate(int month, int day, int year);
      //Function to set the date.
      //Data members dMonth, dDay, and dYear are set
      //according to the parameters.
      //Postcondition: dMnth = month; dDay = day;
      //               dYear = year
      
      void getDate(int& month, int& day, int& year);
      //Function to return the date.
      //Postcondition: month = dMonth; day = dDay;
      //               dYear = year
      
      void printDate();
      //Function to output the date in the form
      //mm-dd-yyyy
      
      dateType(int month = 1, int day = 1, int year = 1900);
      //Constructor to set the date
      //Data members dMonth, dDay and dYear are set
      //according to the parameters.
      //Postcondition: dMonth = month; dDay = day;
      //               dYear = year
      //If no values are specified, the default values are
      //used to initialize the data members.
      
  private:
      int dMonth;          //variable to store the month
      int dDay;            //variable to store the day
      int dYear;           //variable to store the year
};  
