//From: Data Structures Using C++
//Author: D. S. Malik
class clockType
{
public:
  void setTime(int hours, int minutes, int seconds);
    //Function to set the time.
    //The time is set according to the parameters.
    //Postcondition: hr = hours; min = minutes;
    //               sec = seconds
    //The function checks whether the values of hours,
    //minutes, and seconds are valid. If a value is
    //invalid, the default value 0 is assigned.
    
  void void getTime(int& hours, int& minutes, int& seconds);
    //Function to return the time.
    //Postcondition: hours = hr; minutes = min;
    //               seconds = sec
    
  void printTime();
    //Function to print the time.
    //Postcondition: The time is printed in the form
    //               hh:mm:ss.
    
  void incrementSeconds();
    //Function to increment the time by one second.
    //Postcondition: The time is incremented by one 
    //               second.
    //if the before-increment time is 23:59:50, the
    //time is reset to 00:00:00.
    
  void incrementMinutes();
    //Function to increment the time by one minute.
    //Postcondition: The time is incremented by one 
    //               minute.
    //if the before-increment time is 23:59:53, the
    //time is reset to 00:00:53.
  
  void incrementHours();
    //Function to increment the time by one hour.
    //Postcondition: The time is incremented by one 
    //               hour.
    //if the before-increment time is 23:45:53, the
    //time is reset to 00:45:53.  
  
  bool equalTime(const clockType& otherClock) const;
    //Function to compare the two times.
    //Postcondition: Returns true if this time is
    //               equal to otherClock; otherwise,
    //               returns false.
  
  clockType(int hours, int minutes, int seconds)
    //Constructor with parameters
    //Postcondition: hr = hours; min = minutes;
    //               sec = seconds.
    //The constructor checks whether the values of
    //hours, minutes, and seconds are valid. If a
    //value is invalid, the default value 0 is 
    //assigned.
    
  clockType()
  //Default constructor
  //The time is set to the default values.
  //Postcondition: hr = 0; min = 0; sec = 0

private:
  int hr;        //store the hours
  int min;       //store the minutes
  int sec;       //store the seconds
  
};
  
