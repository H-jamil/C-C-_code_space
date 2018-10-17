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
    addr1=&adr;

    student Tom;
    student *tomptr;
    tomptr=&Tom;
    Tom.name="Tom Ken";
    Tom.roll= 1002;
    Tom.addr1.house_no=1230;
    Tom.addr1.road_name="S Grahm";

    cout<<tomptr->name  <<endl ;
    cout<<tomptr->roll  <<endl ;
    cout<<tomptr->addr1->house_no <<endl ;
    cout<<tomptr->addr1->road_name <<endl ;

    return 0;
}

