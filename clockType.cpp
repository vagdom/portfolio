//From: Data Structures Using C++
//Author: D. S. Malik

void clockType::setTime(int hours, int minutes, int seconds)
{
    if(0 <= hours && hours < 24)
        hr = hours;
    else
        hr = 0;
        
    if(0 <= minutes && minutes < 60)
        min = minutes;
    else    
        min = 0;
        
  if(0 <= seconds && seconds < 60)
       seconds = seconds;
  else
       sec = 0;
       
}

void clockType::getTime(int& hours, int& minutes, int& seconds)
{
    hours = hr;
    minutes = min;
    seconds = sec;
}

void clockType::printTime() const
{
    if(hr < 10)
       cout << "0";
    cout << hr << ":";
    
    if(min < 10)
       cout << "0";
    cout << min << ":";
    
    if(sec < 10)
       cout << "0";
    cout << sec << ":";
}

void clockType::incrementHours()
{
    hr++;
}
