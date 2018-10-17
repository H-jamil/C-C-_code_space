#include <iostream>

using namespace std;
void display(int *ptr);

int main()
{
    int age =28;
    bool human=true;

    int *ageptr; // pointer is a variable that is used to store a address of another variable. To declare a pointer the
                 // datatype of the pointer should be same data type as the variable which address we need to store in a pointer
    bool *humanptr;  // * here is used as the indicator to compiler that this variable is a pointer

    ageptr=&age;
    humanptr=&human;

    cout << age << "----->" << *ageptr<<endl;   // but here the * operator is used as value add operator so that means execution of
                                                // *ageptr will locate the memory address initialized/ current to ageptr and from that address
                                                //grab the value
    cout <<age << ".....>"<< &ageptr <<endl;
    cout << human << "----->" << *humanptr<<endl;

    cout << age << "----->" << ageptr<<endl;     //here without the * symbol execution of ageptr will result in the address only not the content
                                                 //of that address
    cout << human << "----->" << humanptr<<endl;
    display(ageptr);
    cout<<age<< "----->" << ageptr << "----->" << *ageptr<<endl;

    cout<<endl;
    cout<< endl;

    int A[5]={1,2,3,4,5};
    int *p;
    p=&A[3];

    cout<<p <<endl<< A << endl<< *p <<endl << *A << endl<< A+4 <<endl<<p+1 << endl << *(A+4) << endl << *(p+1)<<endl;


    return 0;

// pass by reference (passing a pointer to a function)

}

void display (int *ptr)
{

cout<<*ptr<< "----->" <<endl;
*ptr=100;
}
