#include "SalariedEmployee.h"

SalariedEmployee::SalariedEmployee(const std::string& name, int id, double yearlyPayment)
: Employee(name, id, "Salaried"){
    // TODO: 
    this->yearlyPayment = yearlyPayment;
}
/*TODO: calculate Payment */

/* IMPLEMENT GETTERS*/

double SalariedEmployee::calculatePay() const {
    return yearlyPayment / 26;
}
double SalariedEmployee::getyearlyPayment() {
    return yearlyPayment;
}