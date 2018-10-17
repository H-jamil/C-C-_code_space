#include <iostream>

using namespace std;

int main()
{
    int c_array_multi[][2][2]={{{2,5},{7,9}},{{3,4},{6,1}},{{0,8},{11,13}}};
    //int *(pntr1)[2][2]=c_array_multi;
    cout << *(c_array_multi)<< ".... " << *(c_array_multi+1) << " ....... "<< c_array_multi<<endl;

    cout << *(*(*(c_array_multi[0]+1)))<<endl;
    cout << "Hello world!" << endl;
    return 0;
}
