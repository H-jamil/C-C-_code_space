#include <iostream>
#include<string>
using namespace std;

class Human{

private:

    int age;
    string name;

public:


    Human(string initialname);
    Human(string initialname,int initialage);
    Human(int initialage);


    void showageName(){

    cout<< age << "    " <<name<< endl;
    }
    Human() // this is a constructor of the Human class; every time a object is created, this constructor will be called automatically
            // constructor are used to initialize the class variables normally   (Same name as class and no return type)

    {

    cout<<"a Object of Human class is created"<< endl;
    name="no name";
    age=0;
    showageName();
    }





};

// as constructor are used for initializing the class variables and they are functions and methods they could be overloaded with

Human::Human(string initialname)

{

    cout<<"a Object of Human class is created with name being initialized"<< endl;
    name=initialname;
    age=0;
    showageName();


}

Human::Human(string initialname,int initialage)

{

    cout<<"a Object of Human class is created with name  and age both being initialized"<< endl;
    name=initialname;
    age=initialage;
    showageName();


}

Human::Human(int initialage)

{

    cout<<"a Object of Human class is created with only age being initialized"<< endl;
    name="noname";
    age=initialage;
    showageName();


}

int main()
{
    Human Jamil,Rummman("Rumman",32),Pranab("Pranab"),Arko(34);
    //cout <<  Jamil.name <<endl;  // output will be a message that a object of Human is created and the initialized value of that object

    //cout << "Hello world!" << endl;



    return 0;
}
