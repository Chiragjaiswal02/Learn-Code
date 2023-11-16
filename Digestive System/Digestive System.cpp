#include <iostream>
#include <vector>
#include <windows.h>
using namespace std;

class Organ {
    public: 
    string name;
    virtual void process() = 0;
    virtual void setName() = 0;
    virtual string getName() = 0;
};

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
        cout<<"Food is getting transferred to stomach."<<endl;
    }
};

class Stomach:public Organ {
    public:
    Stomach() {
        setName();
    }
    void setName() {
        this->name="Stomach";
    }
    string getName() {
        return this->name;
    }
    void process() {
        cout<<getName()<<" is digesting food."<<endl;
    }
};

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

class SmallIntestine:public Organ {
    public:
    SmallIntestine() {
        setName();
    }
    void setName() {
        this->name="Small Intestine";
    }
    string getName() {
        return this->name;
    }
    void process() {
        cout<<getName()<<" absorbs neutrients from the food."<<endl;
    }
};

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

int main() {
    Mouth mouth;
    Esophagus esophagus;
    Stomach stomach;
    SmallIntestine smallIntestine;
    Liver liver;
    Pancreas pancreas;
    LargeIntestine largeIntestine;

    std::vector<Organ*> digestiveSystem = {&mouth, &esophagus, &stomach, &smallIntestine, &liver, &pancreas, &largeIntestine};
    std::cout<<endl<<endl;
    int i=1;
    for (Organ* Organ : digestiveSystem) {
        std::cout<<i++<<". ";
        Organ->process();
        std::cout<<endl;
        Sleep(1000);
    }
    std::cout<<endl<<endl;

    return 0;
}
