#include <iostream>
#include "CommissionEmployee.h"

using namespace std;

CommissionEmployee::CommissionEmployee() : Employee(), sales(0.0), commission(0.0)
{
    // Default constructor for CommissionEmployee
}

// ToDo: implement the constructor, remember to call base class constructor
CommissionEmployee::CommissionEmployee(string name, string SSN, double sales, double commission):Employee(name, SSN), sales(sales), commission(commission){
	// deliberately empty
	// cout << "CommissionEmployee(" << name << "," << SSN << "," << sales << "," << commission << ")\n"; 
}

double CommissionEmployee::get_sales() const
{
    return sales;
}

void CommissionEmployee::set_sales(double new_sales)
{
    sales = new_sales;
}

double CommissionEmployee::get_commission() const
{
    return commission;
}

void CommissionEmployee::set_commission(double new_commission)
{
    commission = new_commission;
}

double CommissionEmployee::get_net_pay() const
{
    return (commission / 100) * sales;
}

void CommissionEmployee::print_check() const
{
    cout << "Commission Employee. \nSales: " << sales << " Commission: " << commission
         << "% Pay: " << get_net_pay() << endl;
    cout << "_________________________________________________\n";
}

istream& CommissionEmployee::promptInput(istream& in, ostream& out)
{
    out << "Enter sales and commission rate: ";
    in >> sales >> commission;
    return in;
}