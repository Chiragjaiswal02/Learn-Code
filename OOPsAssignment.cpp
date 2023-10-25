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
        cout << "\nName : " << name << "\nAge : " << age << "\nGender : " <<gender <<"\nHeight : "<<height<<"\nWeight : "<<weight<<"\nAddress : "<<address <<"\nNationality : "<<nationality<<"\n\n" <<endl;
    }
};

class Athelete : public Human {
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
    
};

int main() {

    string name;
    int age;
    string address;
    string gender;
    string nationality;
    float height;
    float weight;
    char choice;
    int athelete_id;
    string sport;
    int medals_won;
    string coach;

    do{
        Human human;
        Athelete ath;
        cout<<"Hi, There!! Fill the Human information--";
        cout<<"\nEnter Name: ";
        cin>>name;
        human.setName(name);
        cout<<"\nEnter Age: ";
        cin>>age;
        human.setAge(22) ;
        cout<<"\nEnter Gender : ";
        cin>>gender;
        human.setGender(gender);
        cout<<"\nEnter Height: ";
        cin>>height;
        human.setHeight(height) ;
        cout<<"\nEnter Weight: ";
        cin>>weight;
        human.setWeight(weight) ;
        cout<<"\nEnter Address : ";
        cin>>address;
        human.setAddress(address);
        cout<<"\nEnter Nationality : ";
        cin>>nationality;
        human.setNationality(nationality);

        cout<<"\nHuman information completed.";
        human.displayInformation();

        cout<<"\n Fill The Athelete Details : ";
        cout<<"\nEnter Athelete Id : ";
        cin>>athelete_id;
        ath.setId(athelete_id);
        cout<<"\nEnter Sport Name : ";
        cin>>sport;
        ath.setSportName(sport);
        cout<<"\nEnter Medals Won : ";
        cin>>medals_won;
        ath.setMedalsWon(medals_won);
        cout<<"\nEnter Coach name : ";
        cin>>coach;
        ath.setCoachName(coach);
        cout<<"\nAthelete information completed.";
        ath.displayInformation(human);


        cout<<"\n Run Again : ";
        cin>>choice;

    }while(choice == 'y');

    return 0;
}
