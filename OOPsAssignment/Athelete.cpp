#include "Human.cpp"
#include "CalculateBMI.cpp"
#include <iostream>
#include <stdio.h>
using namespace std;

class Athelete : public Human,public CalculateBMI {
private:
    int athelete_id;
    string sport;
    int medals_won;
    string coach;

public:
    void setId(int id) {
        this->athelete_id = id;
    }
    void setMedalsWon(int medals) {
        this->medals_won = medals;
    }
    void setSportName(string sportName) {
        this->sport = sportName;
    }
    void setCoachName(string coachName) {
        this->coach = coachName;
    }
    void displayInformation(Human obj) {
        cout << "\nName : " << obj.getName() << "\nSport : " << sport << "\nGender : " <<obj.getGender() <<"\nCoach : "<<coach<<"\nHeight : "<<obj.getHeight()<<"\nWeight : "<<obj.getWeight()<<"\nNationality : "<<obj.getNationality()<<"\n\n"<< endl;
    }
    float getBMI(float newHeight, float newWeight) {
        float heightInMeter = newHeight/100;
        return newWeight/(heightInMeter*heightInMeter);
    }
    
};
