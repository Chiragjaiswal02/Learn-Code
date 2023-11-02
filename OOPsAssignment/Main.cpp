#include <iostream>
#include <stdio.h>
#include "Human.cpp"
#include "CalculateBMI.cpp"
#include "Athelete.cpp"
using namespace std;



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
        string temp="";
        cout<<"Hi, There!! Fill the Human information--";
        cout<<"\nEnter Name: ";
        getline(cin,name);
        // cin>>name;
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
        human.setWeight(weight); getline(cin,temp);
        cout<<"\nEnter Address : ";
        // cin>>address;y
        getline(cin,address);
        human.setAddress(address);
        cout<<"\nEnter Nationality : ";
        cin>>nationality;
        human.setNationality(nationality);

        cout<<"\nHuman information completed.";
        human.displayInformation();

        cout<<"\n Fill The Athelete Details : ";
        cout<<"\nEnter Athelete Id : ";
        cin>>athelete_id;
        ath.setId(athelete_id); getline(cin,temp);
        cout<<"\nEnter Sport Name : ";
        // cin>>sport;
        getline(cin,sport);
        ath.setSportName(sport);
        cout<<"\nEnter Medals Won : ";
        cin>>medals_won; getline(cin,temp);
        ath.setMedalsWon(medals_won);
        cout<<"\nEnter Coach name : ";
        // cin>>coach;
        getline(cin,coach);
        ath.setCoachName(coach);
        cout<<"\nAthelete information completed.";
        ath.displayInformation(human);

        cout<<"Your BMI is: "<< ath.getBMI(human.getHeight(),human.getWeight());


        cout<<"\n Run Again : ";
        cin>>choice;

    }while(choice == 'y');

    return 0;
}
