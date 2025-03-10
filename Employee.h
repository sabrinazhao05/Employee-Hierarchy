#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
using namespace std;


class Employee
{
    public:
		// Constructors
        Employee( );
        Employee(string the_name, string the_ssn);

		// Accessors
        string get_name( ) const;
        string get_ssn( ) const;

		// Mutators
        void set_name(string new_name); 
        void set_ssn(string new_ssn);
 
		// Virtual functions for paycheck
        virtual double get_net_pay() const;
        virtual void print_check() const;
		virtual istream& promptInput(istream& in, ostream& out);

		friend istream& operator>>(istream& in, Employee& empl);

    protected:
		istream& ignorespace(istream& in) const;

    private:
        string name; 
        string ssn; 
};

#endif //EMPLOYEE_H
