#pragma once
#ifndef ADMIN_H
#define ADMIN_H
#include "Employee.h"
#include <string>
#include <iostream>


class Admin : public Employee
{
public:
Admin():Employee(){}
Admin(string name,int id,string password,double salary):Employee(name,id,password,salary){

}
	void addEmployee(Employee& employee) {
		employees.push_back(employee);
	}
	Employee* searchEmployee(int id) {
		for (auto it = employees.begin(); it != employees.end(); it++) {
			if (it->getId() == id)
				return it._Ptr;
		}
		return nullptr;
	}

	void editEmployee(int id, string name, string password, double balance, double salary) {
		searchEmployee(id)->setName(name);
		searchEmployee(id)->setPassword(password);
		searchEmployee(id)->setBalance(balance);
		searchEmployee(id)->setSalary(balance);
	}

	void listEmployee() {
		for (auto it = employees.begin(); it != employees.end(); it++) {
			it->Display();
		}
	}
};

};
static vector<Admin>allAdmins;

#endif

