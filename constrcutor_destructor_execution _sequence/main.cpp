#include <iostream>

using namespace std;


class HumanBeing{


public:



    int age;
    HumanBeing(){

    cout<< "Constructor of HumanBeing is called" << endl;
    }

    ~HumanBeing(){

    cout<< "Distructor of HumanBeing is called" << endl;
    }


};


class Student : public HumanBeing{

public:

    Student(){

    cout<< "Constructor of Student is called" << endl;
    }

    ~Student(){

    cout<< "Distructor of Student is called" << endl;
    }



};

int main()
{
    Student Jamil;
    Jamil.age=25;
    //return 0;
}
