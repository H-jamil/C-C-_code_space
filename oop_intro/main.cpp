#include <iostream>
#include<string>
using namespace std;

// Class is a userdefined datatype
// class declared inside a function is only accessable for that function
//class declatred outside the function is available for all the functions in a program
// variables and functions that are declared inside a class are the members of that class
// all the variables of that class will have the declared functions ,variables or all the attributes of that class ,
// object are variable of class or runtime scnerio of a class
// in class we will also have access specifier like public and private so restrict the class attributes to be accessible or no

class HumanBeing{

public:    // access specifier

    string name;
    void introduce();
    void display ()
    {
    cout << "this is an object of the class HumanBeing"<<endl;
    }

    void displayAge() // work as output interface of the class
    {

    cout<<"The age of "<< name << " is " << getAge() <<endl;
    }
    void setAge(int a)  // work as an input interface for the class

    {

    age=a;
    }

/*void introduce(){

cout<<"Hi ... "<< name << "  is an object of HumanBeing"<<endl;



}
*/

private:
        int age;
        int getAge()
        {
        return age-5;
        }


};

//scope resolution operator works with the methods of a class not with variables ()
// string HumanBeing::name="noname";// default value of name

void HumanBeing::introduce()
{

cout<<"Hi ... "<< name << "  is an object of HumanBeing"<<endl;

}

int main()
{
    HumanBeing Jamil, Jami;
    Jamil.display();
    Jamil.name="Jamil";
    Jamil.introduce();
    Jamil.setAge(25);
    Jamil.displayAge();
    Jami.name="Jami";
    Jami.introduce();

    HumanBeing *Rummanptr;
    Rummanptr=new HumanBeing();

    Rummanptr->name="Rumman";
    Rummanptr->introduce();

    cout << "Hello world!" << endl;
    return 0;
}
