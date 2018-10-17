#include <iostream>
#include<string>


using namespace std;

class Human{

public:

    static int human_count; // this is a static int variable which will be shared (only one copy will be available) among the
                            // objects of this class. This static variable needs to be initialized outside the class and before the class in use (objects are created).
    void display(){


    cout<< "There are total " << human_count << " number of people in this program. " << endl;

    }

    Human() // a constructor of the class Human, everytime a object is created this constructor will be executed one time
    {

    human_count++;

    }

    static void showHumanclassObject(){     // this is a static member function of class Human. This method will be shared to all
                                            // the objects of class Humman ; so only one copy of this method will be available among all the objects.
                                            // this static method could only operates on static type variables .

    cout<< "There are total " << human_count << " number of people in this program. " << endl;


    }


};

int Human::human_count=0;

void displayfunction();

int main()
{
    cout << "Hello world!" << endl;

    displayfunction();
    displayfunction();
    displayfunction();
    cout << endl;
    cout<< Human::human_count <<endl;
    Human jamil, rumman, pranab, koushik, eham;
    jamil.display();
    eham.display();
    Human::showHumanclassObject(); // static function : shared by all the objects and only one copy of this function is available throughout the program.

return 0;
}

void displayfunction(){

static int counter=0;// counter is a static veriable, so will be stored in the heap. This line will execute only the first time
                     // displayfunction is being called; the next/subsequent calls will not execute this line.

cout << "Displayfunction is called " << ++counter <<" times"<<endl;

}
