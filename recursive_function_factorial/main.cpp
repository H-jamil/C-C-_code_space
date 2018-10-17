#include <iostream>

using namespace std;

int factorial(int value);

int main()
{
    cout << "Hello world!" << endl;

    int result;

    result=factorial(8);
    cout<<result<<endl;
    return 0;
}


int factorial(int value)

{
if (value==1)
{
return 1;
}

else

return value*factorial(value-1);


}
