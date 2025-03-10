#ifndef ADMINISTRATOR_H
#define ADMINISTRATOR_H

#include "SalariedEmployee.h"

class Administrator : public SalariedEmployee
{
  public:
	Administrator();
    Administrator(string name, string SSN, double salary, string title, double bonus);

	string get_title() const;
    void set_title(const string& new_title);
    double get_bonus() const;
    void set_bonus(double new_bonus);

	virtual double get_net_pay() const;
    virtual void print_check() const;
    virtual istream& promptInput(istream& in, ostream& out);

  private: 
	string title;  
    double bonus;  
};

#endif

