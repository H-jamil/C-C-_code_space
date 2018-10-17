
//Structure is a collection of variables of different types

#include <iostream>

using namespace std;

struct student  // structure is a type of data type just like a variable
                // this structure is a global structure so available for all the function
                //int rollno, char sex are members of student structure
                // the members of an structure could be variables, arrays, unions and another structure
{
 int rollno;
 char sex;
 char grade;

} john, bob; //john & bob are variables of structures.

void display(student s);
void show(student *s);

int main()
{
    cout << "Hello world!" << endl;
    student tim, merry={1234,'f','a'};
    tim={1000,'m','a'};
    student *johnptr,*timptr;

    johnptr=&john;
    timptr=&tim;

    tim.rollno=2324;
    tim.sex='m';
    tim.grade='b';


    john.grade='C';
    johnptr->sex='m';
    timptr ->sex ='f';


    cout<<tim.rollno << "...." << merry.rollno << "...."<<tim.sex << "....."<<johnptr->grade<<"......"<< john.sex<< endl;
    cout<<"...$$$$$$$$$$>.............$$$$$$$$$$......."<< endl;

    show(&tim);
    cout<< endl;
    display(tim);
    return 0;
}


void display(student s)

{
 cout<<s.grade<<endl;
 cout<<s.rollno<<endl;
 cout<<s.sex<<endl;

 s.rollno=1546;
}

void show(student *s)
{

 cout<<s->grade<<endl;
 cout<<s->rollno<<endl;
 cout<<s->sex<<endl;

 s->rollno=1546;

}
