/* Implement Administrator class */
#include <iostream>
#include "Administrator.h"

using namespace std;

Administrator::Administrator() : SalariedEmployee(), title("No title"), bonus(0.0)
{
// Default constructor for Administrator
}

Administrator::Administrator(string name, string SSN, double salary, string title, double bonus)
    : SalariedEmployee(name, SSN, salary), title(title), bonus(bonus)
{
    // Custom constructor
}

string Administrator::get_title() const
{
    return title;
}

void Administrator::set_title(const string& new_title)
{
    title = new_title;
}

double Administrator::get_bonus() const
{
    return bonus;
}

void Administrator::set_bonus(double new_bonus)
{
    bonus = new_bonus;
}

// Override get_net_pay to include bonus
double Administrator::get_net_pay() const
{
    return SalariedEmployee::get_net_pay() + bonus;
}

void Administrator::print_check() const
{
    SalariedEmployee::print_check();
    cout << "Administrator Title: " << title << endl;
    cout << "Bonus: " << bonus << " Pay: " << get_net_pay() << endl;
    cout << "_________________________________________________\n";
}

istream& Administrator::promptInput(istream& in, ostream& out)
{
    SalariedEmployee::promptInput(in, out);
    out << "Enter bonus and title: ";
    in >> bonus;
    ignorespace(in);
    getline(in, title);
    return in;
}