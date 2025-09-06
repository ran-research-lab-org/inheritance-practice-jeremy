// Parent Class Employee
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

using namespace std;

class Employee {
// Attributes
protected:
    std::string name;
    int id;
    string type; // "Hourly" or "Salaried"

// Methods
public:
	// TODO: Constructor

    Employee();
    Employee(const string& name, int id, const string& type);

    // Virtual function to calculate payment
    virtual double calculatePay() const = 0;

    // TODO: Getters

    string getType();
    string getName();
    int getId();
};

#endif

