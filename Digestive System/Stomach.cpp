#pragma once
#include<iostream>
#include "Organ.cpp"
using namespace std ;

class Stomach:public Organ {
    public:
    Stomach() {
        setName();
    }
    void setName() {
        this->name="Stomach";
    }
    string getName() {
        return this->name;
    }
    void process() {
        cout<<getName()<<" is digesting food."<<endl;
    }
};
