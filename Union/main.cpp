/*

Union: User defined Data type
the members share a common memory block ; so only one member could be
declared.


Each member has a unique memory block where they can store store only one member.

the allocated memory for each union variable is only for one member.
So if ras is a union variable, and in program ras.salary and ras.id both are defined, only the later statement will work.
if ras.id=100 and ras.salary=1000 is defined ras.salary will overwrite ras.id ......

*/

#include <iostream>

using namespace std;

union employee

{
int id;
float sal;

} anil, ras;

int main()
{
    employee raj,sabur;

    sabur.id=100;
    //sabur.sal=1000;
    cout<<sabur.id<<endl; // not going to give 100 as this memory block is already reassigned to sabur.sal
    sabur.sal=1000;
    cout<<sabur.sal<<endl;


    ras.id=113;
    cout<<ras.id<< endl;  // not going to give 100 as this memory block is already reassigned to ras.sal
    ras.sal=2000;
    cout<<ras.sal<< endl;

    cout<<sizeof(ras)<<endl;


    cout<<sabur.id<<endl;
    cout<<sabur.sal<<endl;

    cout<<ras.id<< endl;  // not going to give 100 as this memory block is already reassigned to ras.sal
    cout<<ras.sal<< endl;

    cout << "Hello world!" << endl;
    return 0;
}
