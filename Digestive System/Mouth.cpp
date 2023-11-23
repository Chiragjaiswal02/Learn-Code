#pragma once
#include<iostream>
#include "Organ.cpp"
using namespace std ;

class Mouth:public Organ {
    
    public:
    Mouth() {
        setName();
    }
    void setName() {
        this->name="Mouth";
    }
    string getName() {
        return this->name;
    }
    void process() {
        cout<<getName()<<" is chewing food"<<endl;
    }
};