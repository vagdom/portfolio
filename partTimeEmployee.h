//From: Data Structures Using C++
//Author: D. S. Malik

class partTimeEmployee: personType
{
  public:
      void print;
      //Function to output the first name, last name,
      //and the wages.
      //Postcondition: Outputs:
      //               firstName lastname wages are $$$$.$$
  
      double calculatePay();
      //Function to calculate and return the wages.
      //Postcondition: The pay is calculated and returned.
      
      void setNameRateHours(string first, string last,
                            double rate, double hours);
      //Function to set first name, last name,
      //pay rate, and hours worked according to the
      //parameters.
      //Postcondition: firstName = first; lastName = last;
      //             payRate = rate; hoursWorked = hours
      
      partTimeEmployee(string first = "", string last = "",
                       double rate = 0, double hours = 0)
      //Constructor with parameters
      //Sets the first name, last name, pay rate, and
      //hours worked according to the parameters. If 
      //no value is specified, the default values are
      //assumed.
      //Post condition: firstName = name; 
      //                lastName = last; payRate = rate;
      //                hoursWorked = hours
      
  private:
      double payRate;       //stores teh pay rate
      double hoursWorked    //stores the hours worked
};      
