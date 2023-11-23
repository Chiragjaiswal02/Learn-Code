#pragma once
#include<iostream>
#include "Organ.cpp"
using namespace std ;

class Pancreas:public Organ {
    public:
    Pancreas() {
        setName();
    }
    void setName() {
        this->name="Pancreas";
    }
    string getName() {
        return this->name;
    }
    void process() {
        cout<<getName()<<" is secreting digestive enzymes and insulin."<<endl;
    }
};