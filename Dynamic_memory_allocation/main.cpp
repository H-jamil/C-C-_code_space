/*

Some program needs runtime program memory allocation.
for that Heap memory is used and this is called dynamic memory allocation
(DMA).

New and delete operator are used for Heap or dynamic memory allocation. New operator takes data type as parameter and gives
a address as return.
So this address must be stored in a pointer as variable naming in heap is not possible

*/


#include <iostream>

using namespace std;

int main()
{
    cout<<"How many iteams you want to add?  "<<endl;
    int iteamno;
    cin>>iteamno;



    int* ptr1;
    int* ptr2;

    ptr2=new int[iteamno];

    ptr1=new int;

    *ptr1=1298;

    cout<<ptr1<<endl;
    cout<<*ptr1<<endl;
    cout << "Hello world!" << endl;

    for (int counter=0; counter<iteamno ; counter++)
    {

    cout<<"Enter "<<counter+1<<" Element "<<endl;
    cin>>*(ptr2+counter);

    }

    cout<<"You have intered "<< iteamno <<" elements" << endl;
        for (int counter=0; counter<iteamno ; counter++)
    {

    cout<< "Your" <<counter+1 <<" Element is " << *(ptr2+counter)<<endl;


    }
    delete ptr1; // for de-allocating the used heap memory after complete usage. otherwise that allocated memory will be wasted.
    delete []ptr2;
    cout<<ptr1<<endl;
    cout<<*ptr1<<endl; // will show 0 as memory has been deallocated
    return 0;
}
