#include <iostream>
#include<string>
using namespace std;


struct address{


int house;
string roadno;


};


struct student{

int roll_no;
char sex;
address addr;
address *addrptr;

};



int main()
{
   // cout << "Hello world!" << endl;

    student *Jamilptr;
    student Jamil;
    Jamilptr=&Jamil;


    student *koushikptr=new student();


    koushikptr->roll_no=06;
    koushikptr->sex='M';
    koushikptr->addr.house=4;
    koushikptr->addr.roadno="Cristian Mission,Faridpur -7200";



    cout<<koushikptr->roll_no<<endl;
    cout<<koushikptr->sex<<endl;
    cout<<koushikptr->addr.house<<endl;
    cout<<koushikptr->addr.roadno<<endl;
    cout<< endl;

    address addr_koushik={420,"Police Line Rd, Faridpur-7800"};
    koushikptr->addrptr=&addr_koushik;


    cout<<koushikptr->roll_no<<endl;
    cout<<koushikptr->sex<<endl;
    cout<<koushikptr->addrptr->house<<endl;
    cout<<koushikptr->addrptr->roadno<<endl;
    cout<< endl;

    delete koushikptr;



    Jamil.roll_no=902113;
    Jamil.sex='M';
    Jamil.addr.house=153;
    Jamil.addr.roadno="QK hall, CUET-4349";

    address addr_jamil={420, "South Graham Ave, Il-62901 "};
    //address *addrptr;
    Jamilptr->addrptr=&addr_jamil;

    cout<<Jamil.roll_no<<endl;
    cout<<Jamil.sex<<endl;
    cout<<Jamil.addr.house<<endl;
    cout<<Jamil.addr.roadno<<endl;

    Jamilptr->roll_no=855574994;
    Jamilptr->sex='M';
    Jamilptr->addr.house=420;
    Jamilptr->addr.roadno="S.Graham Ave, Il-62901";

    cout<< endl;
    cout<<Jamilptr->roll_no<<endl;
    cout<<Jamilptr->sex<<endl;
    cout<<Jamilptr->addr.house<<endl;
    cout<<Jamilptr->addr.roadno<<endl;


    Jamilptr->roll_no=855574994;
    Jamilptr->sex='M';


    cout<< endl;
    cout<<Jamilptr->roll_no<<endl;
    cout<<Jamilptr->sex<<endl;
    cout<<Jamilptr->addrptr->house<<endl;
    cout<<Jamilptr->addrptr->roadno<<endl;



    return 0;
}
