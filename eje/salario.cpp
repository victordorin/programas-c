include <iostream>
using namespace std;

int calcWeeklyPay(int paidWeekly, int annualSalaryWeekly)
    Returns the Weekly salary of weekly paid Employees

int calcWeeklyPay(int paidHourly, int annualSalaryHourly)
    //Returns the Weekly salary of Hourly paid Employees

int main()
{

    int paidWeekly, paidHourly, annualSalaryWeekly, annualSalaryHourly, hoursWorked

        cout << "Please Enter Your Annual Salary"
        << "of a Weekly Paid Employee:";
    cin >> annualSalaryWeekly;

    paidWeekly=annualSalaryWeekly/52;

        cout<<"The Annual Salary for the weekly paid employee is:"<<paidWeekly
        << endl;

    cout << "Please Enter Your Annual Salary"
        << "of a Hourly Paid Employee:";
    cin >> annualSalaryHourly;

    cout<< "Enter Hours Worked";
    cin >> hoursWorked;

    paidHourly=annualSalaryHourly/hoursWorked

        cout<<"The Annual Salary for the hourly paid employee is:"<<paidHourly
        << endl;


    return 0;
}
