#include <iostream>

using namespace std;


class HumanBeing{

public:

    virtual void introduce(){

    cout<< "Hey from HumanBeing"<<endl;

    }

};

class student:public HumanBeing{

public:

    void introduce(){

    cout<< "Hey from student"<<endl;
    }

};

class farmer:public HumanBeing{

public:

    void introduce(){

    cout<< "Hey from farmer"<<endl;
    }

};

void whoiscalling(HumanBeing &name){

name.introduce();

}

int main()
{
    HumanBeing rudro;
    student jamil;
    farmer rumman;
    rudro.introduce();
    whoiscalling(jamil);
    whoiscalling(rumman);

    return 0;
}
