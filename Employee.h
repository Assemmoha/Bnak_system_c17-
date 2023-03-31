#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#pragma once
#include <fstream>
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
    
		fstream file;
		file.open("Clients.txt", ios::app);
		file << client.getId() << '&' << client.getName() << '&'
			<< client.getPassword() << '&' << client.getBalance() << endl;
		file.close();
}
Client* searchClient(int id) {
		for (auto it = clients.begin(); it != clients.end(); it++) {
			if (it->getId() == id)
				return it._Ptr;
		}

		return nullptr;
	}

	void listClient() {
		for (auto it = clients.begin(); it != clients.end(); it++) {
			it->Display();
		}
	}
void editClient(int id, string name, string password, double balance) {
		searchClient(id)->setName(name);
		searchClient(id)->setPassword(password);
		searchClient(id)->setBalance(balance);
	}
};
static vector<Employee> allEmployees;


#endif
