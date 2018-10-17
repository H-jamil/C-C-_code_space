#include <iostream>

using namespace std;

class HumanBeing{
private:
string *name;
int *age;
public:
HumanBeing(string,int);
~HumanBeing();

void display()
{
cout<< "Hi,,, I am "<< *name << " and I am "<< *age << " years old"<<endl;
}

};

HumanBeing::HumanBeing(string iname,int iage)
{
HumanBeing::name=new string;
HumanBeing::age=new int;

*name=iname;
*age=iage;
cout<< "constructor is called" <<endl;

}

HumanBeing::~HumanBeing()
{

delete HumanBeing::name;
delete HumanBeing::age;
cout<< "Distructor is called and memory is cleared" <<endl;

}


int main()
{
    cout << "Hello world!" << endl;
    cout << ",,,,,,,,,,,,---------,,,,,,,,,"<<endl;

    HumanBeing *jamil;
    jamil=new HumanBeing("Jamil",25);

    jamil->display();

    delete jamil;
    return 0;
}
