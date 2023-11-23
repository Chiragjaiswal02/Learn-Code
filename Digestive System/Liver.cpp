#pragma once
#include<iostream>
#include "Organ.cpp"
using namespace std ;

class Liver:public Organ {
    public:
    Liver() {
        setName();
    }
    void setName() {
        this->name="Liver";
    }
    string getName() {
        return this->name;
    }
    void process() {
        cout<<getName()<<" is detoxifying the body and producing essential proteins."<<endl;
    }
};