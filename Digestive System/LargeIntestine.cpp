#pragma once
#include<iostream>
#include "Organ.cpp"
using namespace std ;

class LargeIntestine:public Organ {
    public:
    LargeIntestine() {
        setName();
    }
    void setName() {
        this->name="Large Intestine";
    }
    string getName() {
        return this->name;
    }
    void process() {
        cout<<getName()<<" absorbs water and forming feces."<<endl;
    }
};