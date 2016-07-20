// Contact class specification file

#ifndef CONTACTINFO_H
#define CONTACTINFO_H

#include <cstring>

using namespace std;

// ContactInfo class declaration
class ContactInfo
{
  private:
    char *name;      // The contact's name
    char *phone;     // The contact's phone
    
    // Private member function: initName
    // This function initializes the name attribute
    void initName(char *n)
    {
      name = new char[strlen(n) + 1];
      strcpy(name, n);
    }
    
    void initPhone(char *p)
    {
      phone = new char[strlen(p) + 1];
      strcpy(phone, p);
    }
    
  public:
    // Constructor
    ContactInfo(char *n, char *p)
    {
      // Initialize the name attribute
      initName(n);
      
      // Initialize the phone attribute
      initPhone(p);
    }
    
    // Destructor
    ~ContactInfo()
    {
      delete [] name;
      delete [] phone;
    }
    
    const char *getName() const
    {
      return name;
    }
    
    const char *getPhone() const
    {
      return phone;
    }
};

#endif
