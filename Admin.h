#pragma once
#ifndef ADMIN_H
#define ADMIN_H
#include "Employee.h"

class Admin : public Employee
{
public:
Admin():Employee(){}
Admin(string name,int id,string password,double salary):Employee(name,id,password,salary){

}

};
static vector<Admin>allAdmins;

#endif
