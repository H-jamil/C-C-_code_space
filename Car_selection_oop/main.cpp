#include <iostream>
#include "car.h"

using namespace std;
int main()
{
    car MyCar;
    int randomCrapIDontCareAbout;
    cout << "OOP Code Challenge - Cars" << endl;

    MyCar.SetColour(4); // 1-4 only
    MyCar.SetMake(3); // 1-4 only
    MyCar.SetDirection(2); // 1-4 only
    MyCar.SetModel(1); // 1-4 only
    MyCar.SetSpeed(0); // 1-200 only

    cout << "Initial Values:" << endl;
    MyCar.PrintCurrentCar();

    cout << "Step 1 - From rest, accelerate to 60km/h"<<endl;
    MyCar.SetSpeed(60);
    MyCar.PrintCurrentCar();

    cout << "Step 2 - Make a 90-degree left-hand turn" << endl;
    MyCar.ChangeDirection(-1);
    MyCar.PrintCurrentCar();

    cout << "Step 3 - Make a 90-degree right-hand turn" << endl;
    MyCar.ChangeDirection(+1);
    MyCar.PrintCurrentCar();

    cout << "Step 4 - Accelerate to 90km/h" << endl;
    MyCar.SetSpeed(90);
    MyCar.PrintCurrentCar();

    cout << "Step 5 - Brake to 0km/h" << endl;
    MyCar.SetSpeed(0);
    MyCar.PrintCurrentCar();

    cin >> randomCrapIDontCareAbout;
    return 0;
}

