#include <iostream>
#include<string>

using namespace std;


class Human{

private:
        int *age;
        string *name;

public:
        Human(int initialage=0, string initialname="no name")
        {
        cout<<"This is not a default constructor so everytime a object is created"<<endl <<"a name string and a age value should be passed"<<endl;
        age=new int;
        name=new string;

        *name=initialname;
        *age=initialage;



        }

        ~Human();



        void DisplayNameAge()
        {
        cout << endl;
        cout<< "I am "<< *name <<" and i am " << *age << " years old"<< endl;

        }


};

Human::~Human( )

{

delete age;
delete name;
cout << "The Destructor is called and The memory is cleared";

}


int main()
{
    Human *jamil=new Human(25,"Jamil");
    jamil->DisplayNameAge();
    delete jamil;
    return 0;
}
