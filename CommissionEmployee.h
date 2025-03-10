//#pragma once
#include <iostream>
#include "Employee.h"

#ifndef _COMMISSION_H
#define _COMMISSION_H

class CommissionEmployee : public Employee
{
public:
	CommissionEmployee();
    CommissionEmployee(string name, string SSN, double sales, double commission);

	double get_sales() const;
    void set_sales(double new_sales);
    double get_commission() const;
    void set_commission(double new_commission);

 	virtual double get_net_pay() const;
    virtual void print_check() const;
    virtual istream& promptInput(istream& in, ostream& out);

private:
    double sales;
    double commission;
};

#endif