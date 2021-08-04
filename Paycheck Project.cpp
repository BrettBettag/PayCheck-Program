#include <iostream>

int main()
{
using namespace std;
const int paychecks =24;
const double employeecontrate =.04;
const double employercontrate =.02;
double weeklypaychecks;
double totalemployeecontrate;
double totalemployercontrate;
double totalcont;
double acctotalemployeecontrate;
double acctotalemployercontrate;
double acctotalcontrate;

    for( int a = 1; a < 25; a += 1 ) {
    cout << "Please enter your paycheck amount" << endl;
    cin >> weeklypaychecks;
    totalemployeecontrate = weeklypaychecks * employeecontrate;
    totalemployercontrate = weeklypaychecks * employercontrate;
    totalcont = totalemployeecontrate + totalemployercontrate;
    acctotalemployeecontrate += totalemployeecontrate;
    acctotalemployercontrate += totalemployercontrate;
    acctotalcontrate += totalcont;
    cout << "Your weekly paycheck was: " << weeklypaychecks << endl;
    cout << "Your contribution to this paycheck is: " << totalemployeecontrate << endl;
    cout << "Your employer contribution to this paycheck is: " << totalemployercontrate << endl;
    cout << "The total amount contributed to your retirement from this paycheck is: " << totalcont << endl;
    cout << "Your total individual contribution to your retirement plan this year is: " << acctotalemployeecontrate << endl;
    cout << "Your employers total contribution to your retirement plan this year is: " << acctotalemployercontrate << endl;
    cout << "Your overall total in retirement plan is: " << acctotalcontrate << endl;

    }
    return 0;
}
