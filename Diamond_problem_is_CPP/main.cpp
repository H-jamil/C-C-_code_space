#include <iostream>

using namespace std;

class animal{

public:

    animal(){
    cout<< "Constructor of Animal is called"<<endl;

    }

    void movement(){

    cout << "Animals move with 4 legs touching in ground"<<endl;
    }


};

class lion: virtual public animal{

public:

    lion(){
    cout<< "Lion Constructor  is called"<<endl;
    }
};


class tiger:virtual public animal{

public:

    tiger(){
    cout<< "tiger Constructor  is called"<<endl;

    }

};


class liger:public lion,public tiger{

public:

    liger(){
    cout<< "Liger Constructor  is called"<<endl;

    }

};


int main()
{
    liger pranab;
    pranab.movement();
    return 0;
}
