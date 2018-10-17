#include <iostream>

using namespace std;


bool age_check(int);

int main()
{
    int age;
    int *ageptr=&age;
    cout<< "Enter your age    "<<endl;
    cin >> age;

    if(age_check(age))
    {
    cout<< "You are an adult,,,congratualtions" << endl;
    cout << &age<<endl;
    cout << ageptr<<endl;
    }

    else
    {
    cout << "You are a kid .... go drink from fidder" <<endl;
    cout << age<<endl;
    cout << ageptr<<endl;
    }
    return 0;
}

// Here multiple return statement is used but only one return will be executed each time this function is called
// every return could return only one value. if we need to return multiple values, we may need to use pointers.
bool age_check(int age){

if (age>17)
return true;
else
return false;

  }
