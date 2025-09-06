#include "Employee.h"

using namespace std;

Employee::Employee(const std::string& name, int id, const std::string& type)
{
  // TODO:
  this->name = name;
  this->id = id;
  this->type = type; 
}

/* IMPLEMENT GETTERS*/

string Employee::getType() {
  return type;
}
string Employee::getName() {
  return name;
}
int Employee::getId() {
  return id;
}