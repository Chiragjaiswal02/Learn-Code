#pragma once
#include<iostream>
#include "Organ.cpp"
using namespace std ;

class SmallIntestine:public Organ {
    public:
    SmallIntestine() {
        setName();
    }
    void setName() {
        this->name="Small Intestine";
    }
    string getName() {
        return this->name;
    }
    void process() {
        cout<<getName()<<" absorbs neutrients from the food."<<endl;
    }
};