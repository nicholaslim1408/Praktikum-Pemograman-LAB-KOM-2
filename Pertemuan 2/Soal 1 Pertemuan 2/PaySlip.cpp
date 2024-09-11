#include <iostream>
using namespace std;

int main(){

    string nama1, nama2;
    float salary, tax, install, insurance, net;

    cout << "Input employee name = ";
    cin >> nama1 >> nama2;
    cout << "Input gross salary = ";
    cin >> salary;

    tax = salary * 0.2;
    install = 200000;
    insurance = 150000;
    net = salary - tax - install - insurance;

    cout << "Payslip for Employee" << endl;
    cout << "---------------------" << endl;

    cout << "Name: " << nama1 << " " << nama2 << endl;
    cout << "Gross Salary: " << salary << endl;
    cout << "Tax (20%): " << tax << endl;
    cout << "Installment: " << install << endl;
    cout << "Insurance: " << insurance << endl;
    cout << "Net Salary: " << net << endl;
    
    return 0;
}