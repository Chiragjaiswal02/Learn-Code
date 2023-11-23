#pragma once
#include<iostream>
#include "Organ.cpp"
using namespace std ;

class Esophagus:public Organ {
    public:
    Esophagus() {
        setName();
    }
    void setName() {
        this->name="Esohagus";
    }
    string getName() {
        return this->name;
    }
    void process() {
        cout<<"Through "<<getName()<<" Food is getting transferred to stomach."<<endl;
    }
};