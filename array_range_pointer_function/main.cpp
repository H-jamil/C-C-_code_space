#include <iostream>

using namespace std;

void display(const int* start, const int* finish);

int main()
{

int array1[]={11,22,33,44,66,55,77,88,99,00};
display(array1+4,array1+10);
    cout << "Hello world!" << endl;
    return 0;
}
void display (const int* start, const int* finish)

{
const int* ptr; // this const keyword for the pointer does mean that the value this pointer is
                // pointing to is unmodifiable

for (ptr=start;ptr!=finish;ptr++)
{

cout << *ptr<<endl;
}

}
