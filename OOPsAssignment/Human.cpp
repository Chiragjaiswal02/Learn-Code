#include <iostream>
#include <stdio.h>
using namespace std;

class Human {

private:
    string name;
    int age;
    string address;
    string gender;
    string nationality;
    float height;
    float weight;

public:
    // Function to set the details
    void setName(string name) { this->name = name;}
    void setAge(int age) {  this->age = age;}
    void setAddress(string address) {   this->address = address;}
    void setGender(string gender) { this->gender = gender;}
    void setNationality(string nationality) {   this->nationality = nationality;}
    void setHeight(float height) {  this->height = height;}
    void setWeight(float weight) {  this->weight = weight;}
    
    //Function to get the details
    string getName() {  return this->name;}
    int getAge(){ return this->age;}
    string getAddress(){    return this->address;}
    string getGender(){    return this->gender;}
    string getNationality(){    return this->nationality;}
    int getHeight(){ return this->height;}
    int getWeight(){ return this->weight;}

    void displayInformation() {
        cout << "\nName : " << name << "\nAge : " << age << "\nGender : " <<gender <<"\nHeight in cm : "<<height<<"\nWeight in kg: "<<weight<<"\nAddress : "<<address <<"\nNationality : "<<nationality<<"\n\n" <<endl;
    }
};
