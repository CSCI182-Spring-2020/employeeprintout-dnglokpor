
/*
CSCI 182 - Assignment 3
EmployeePrintout.cpp
Create a record of Employee using various structures

Brett Huffman
v1.0 2/6/2020
*/

#include <iostream>
using namespace std;

// enum structure
enum EMPLOYEE_TYPE {MANAGER, EMPLOYEE, VOLUNTEER};

// record of adresses
struct Address {
    string city;
    string state;
};

// record of employees
struct Employee {
    string name;
    int divisionNo;
    Address address;
    EMPLOYEE_TYPE employeeType = MANAGER;

    /// <summary>
    /// Prints the right string sequence for the EMPLOYEE_TYPE
    /// </summary>
    void printEmployeeType() {
        switch (employeeType)
        {
            case MANAGER:
                cout << "Manager";
                break;
            case EMPLOYEE:
                cout << "Employee";
                break;
        default:
            cout << "Volunteer";
            break;
        }
    }

    /// <summary>
    /// Prints the record of an Employee as:
    /// {EMPLOYEE_TYPE Name DivisionNo City State}
    /// </summary>
    void employeePrintout() {
        // prints the employee type first
        printEmployeeType();
        // then the rest of the info
        cout << " " << name << " " << divisionNo << " " << address.city << " " <<
            address.state << endl;
    }
};

int main()
{
    // sample enployee for test of the records
    Employee softwareDevelopper;
    Employee ceo;

    // filling in fake info
    softwareDevelopper.name = "Delwys Glokpor";
    softwareDevelopper.divisionNo = 6;
    softwareDevelopper.address.city = "Elsah";
    softwareDevelopper.address.state = "IL";
    softwareDevelopper.employeeType = EMPLOYEE;

    // filling in fake info 2
    ceo.name = "Brett Huffman";
    ceo.divisionNo = 1;
    ceo.address.city = "Los Angeles";
    ceo.address.state = "CA";
    ceo.employeeType = MANAGER;

    // printing the info
    softwareDevelopper.employeePrintout();
    ceo.employeePrintout();
}
