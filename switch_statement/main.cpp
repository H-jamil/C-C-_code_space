#include <iostream>

using namespace std;

int main()
{
    char input;
    cout<<"Enter Your Grade ..." <<endl;
    cin>>input;

    switch (input)     // switch( expression / variable) : in case of using expression in switch operation, one
                      // must be careful that the expresion should return integral/enumerated type (int,char, cons,enum)
    {

        case 'A':
        case 'a':   //'A' or 'a' both satisfy this case ; similarly multiple case could be combined to have same output
        {
        cout<< "excellent grade"<<endl;
        break;
        }

        case 'b':
        case 'B':
        {
        cout<< "Very good grade"<<endl;
        break;
        }

        case 'C':
        case 'c':
        {
        cout<< "Good grade"<<endl;
        break;
        }

        case 'D':
        case 'd':
        {
        cout<< "Not bad "<<endl;
        break;
        }

        default :
        {
        cout<<"Where the FU** you got that"<<endl;
        break;
        }

   cout<< "just outside the switch statement"<<endl;

    }

    cout<< "Done with your grading"<<endl;
    return 0;
}

