#include <string>
#include <cstdlib>
#include <iostream>
#include "Employee.h"
#include <iomanip>
#include <cctype>
using namespace std;

Employee::Employee( ) : name("No name yet"), ssn("No number yet")
{
}

Employee::Employee(string the_name, string the_number) 
       : name(the_name), ssn(the_number)
{
}

string Employee::get_name( ) const 
{
    return name;
}

string Employee::get_ssn( ) const 
{
    return ssn;
}

void Employee::set_name(string new_name)
{
    name = new_name;
}

void Employee::set_ssn(string new_ssn)
{
    ssn = new_ssn;
}

double Employee::get_net_pay() const
{
	return 0.0;
}

void Employee::print_check( ) const
{
    cout << "\n_______________________________________________\n" ;
    cout << "Pay to the order of " << get_name( ) << endl;
    cout << "The sum of " << get_net_pay( ) << " Dollars\n";
    cout << "__ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __ __\n";
    cout << "Employee Number: " << get_ssn( ) << endl;
}


istream & Employee::promptInput(istream & in, ostream & out)
{
	out << "Enter name and ssn (each on its own line):" << endl;
	return operator>>(in, *this);
}

istream& Employee::ignorespace(istream& in) const
{
	if (!isspace(in.get())) in.unget();
	return in;
}

istream& operator>>(istream& in, Employee& empl)
{
	empl.ignorespace(in);
	getline(in, empl.name);
	getline(in, empl.ssn);
	return in;
}

