#ifndef VALIDATION_H
#define VALIDATION_H
#include<iostream>
#include<string>
using namespace std;
#pragma once

class Validation
{
public:
static bool validateName(string name){
        if(name.size()<5 || name.size()>20)
        return false;
    for(int i=0;i<name.size();i++){
        if(!(isalpha(name[i])))
            return false;
    }
    return true;
}
static bool validatePassword(string pass){
    return (pass.size() > 8 && pass.size() < 20);
}
static bool validateBalance(double balance){
    return (balance >= 1500);
}
static bool validateSalary(double salary){
    return (salary >= 5000);
}
};

#endif
