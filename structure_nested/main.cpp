#include <iostream>
#include<string>

using namespace std;

struct address
{

int house_no;
string road_name;


};

struct student
{

string name;
long int roll;
address *addr1;
};

int main()

{
    cout << "Hello world!" << endl;

    address adr={1230,"S Graham"};


    student Tom;
    student *tomptr;

    tomptr=&Tom;
    Tom.name="Tom Ken";
    Tom.roll= 1002;
    //tomptr->addr1= & adr;
    Tom.addr1=&adr;
    //Tom.addr1.house_no=1230;
    //Tom.addr1.road_name="S Grahm";

    cout<<Tom.name  <<endl ;
    cout<<Tom.roll  <<endl ;
    cout<<Tom.addr1->house_no <<endl ;
    cout<<Tom.addr1->road_name <<endl ;
    cout<<endl;
    cout<<endl;

    cout<<sizeof(Tom)<<endl;
    cout<<sizeof(student)<<endl;
    return 0;
}

