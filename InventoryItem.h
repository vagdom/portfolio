// This class has overloaded constructors.
#ifndef INVENTORYITEM_H
#define INVENTORYITEM_H

#include <string>

using namespace std;

class InventoryItem
{
  private:
    string description;   // The item description
    double cost;          // The item cost
    int units;            // Number of units on hand
  public:
    // Constructor #1
    InventoryItem()
    {
        // Initialize description, cost , and units
        description = "";
        cost = 0.0;
        units = 0;
    }
    
    // Constructor #2
    InventoryItem(string desc)
    {
        // Initialize description, cost , and units
        description = desc
        cost = 0.0;
        units = 0;
    }
    
    // Constructor #3
    InventoryItem(string desc, double c, int u)
    {
        // Initialize description, cost , and units
        description = desc;
        cost = c;
        units = u;
    }
    
    // Mutator functions
    void setDescription(string d)
    {
      description = d;
    }
    
    void setCost(float c)
    {
      cost = c;
    }
    
    void setUnits(int u)
    {
      units = u;
    }
    
    // Accessor functions
    string getDescription() const
    {
      return description;
    }
    
    double getCost() const 
    {
      return cost;
    }
    
    int getUnits() const
    {
      return units;
    }
};
#endif
