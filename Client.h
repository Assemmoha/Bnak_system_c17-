#pragma once
#ifndef CLIENT_H
#define CLIENT_H
#include<iostream>
#include "Person.h"
#include<vector>
using namespace std;

class Client : public  Person {
double balance;
public:
    Client():Person(){
      balance = 0;
    }
    Client(string name,string Password,int id,double balance):Person(name,id,Password)
    {
      setbalance(balance);
    }
    void setbalance(double balance)
    {
        if (Validation::validateBalance(balance))
            this->balance=balance;
        else
            cout <<"Min balance is 1500"<<endl;
    }
    double getBalance()
    {
        return balance;
    }
    void deposit(double amount )
    {
        setbalance(getBalance()+amount);
    }
    void withdraw(double amount)
    {
        if(amount > getBalance())
          cout<<"You can't withdraw."<<endl;
        else
          setbalance(getBalance()-amount);
    }
    void transferTo(double amount,Client& recipient)
    {
        withdraw(amount);
        recipient.setbalance(recipient.getBalance() + amount);
    }
    void display()
    {
        Person::display();
        cout<<"balance : "<<getBalance()<<endl;;
    }
    void checkbalance(){
    cout<<"balance: "<<getBalance()<<endl;


    }
};
static vector<Client> allclients;

#endif
