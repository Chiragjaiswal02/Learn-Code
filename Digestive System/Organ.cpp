#pragma once
#include<iostream>
using namespace std ;

class Organ {
    public: 
    string name;
    virtual void process() = 0;
    virtual void setName() = 0;
    virtual string getName() = 0;
};