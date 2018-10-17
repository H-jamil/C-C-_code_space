#include <iostream>

using namespace std;

int main()

{
    int counter;

  /*  for (counter=1;counter<=10;counter++)
    {
    cout<<counter<<endl;
    if (counter==50)
    break;  // break is applicable to the loop ; more precisely the inner loop, where break is mentioned, not to the outer loop

    }
    cout << "Hello world!" << endl;
    return 0;*/

    for (counter=1;counter<=10;counter++)
    {
    if (counter==5){
    continue;
    }
    cout<<counter<<endl;


    }
    cout << "Hello world!" << endl;
    return 0;
}
