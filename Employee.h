#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#pragma once
#include "Client.h"
class Employee : public Person
{
double salary;
public:
Employee():Person(){
    salary=0;
}
Employee(string name,int id,string password,double salary):Person(name,id,password){
    setSalary(salary);
}
void setSalary(double salary){
    if(Validation::validateSalary(salary))
      this->salary=salary;
    else
      cout<<"Salary should be more than 5000."<<endl;
}
double getSalary(){
    return salary;
}
void display(){
    Person::display();
    cout<<"Salary is : "<<salary<<endl;
}
void addclient(Client& client)
{
    allclients.push_back(client);
}
};
static vector<Employee> allEmployees;


#endif
