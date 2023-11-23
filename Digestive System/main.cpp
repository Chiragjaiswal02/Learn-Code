#include<iostream>
#include <vector>
#include <windows.h>
#include "Mouth.cpp"
#include "Esophagus.cpp"
#include "Stomach.cpp"
#include "SmallIntestine.cpp"
#include "Pancreas.cpp"
#include "Liver.cpp"
#include "LargeIntestine.cpp"
using namespace std ;

int main() {
    Mouth mouth;
    Esophagus esophagus;
    Stomach stomach;
    SmallIntestine smallIntestine;
    Liver liver;
    Pancreas pancreas;
    LargeIntestine largeIntestine;

    vector<Organ*> digestiveSystem = {&mouth, &esophagus, &stomach, &smallIntestine, &liver, &pancreas, &largeIntestine};
    cout<<endl<<endl;
    int i=1;
    for (Organ* Organ : digestiveSystem) {
        cout<<i++<<". ";
        Organ->process();
        cout<<endl;
        Sleep(1000);
    }
    cout<<endl<<endl;

    return 0;
}