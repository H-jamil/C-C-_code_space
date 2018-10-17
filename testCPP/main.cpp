#include <iostream>
using namespace std;

int dispaly(int, int);   // this is a fuction prototype

inline void display_character(int);

int main()
{
/*
  int number1, number2, temp;
  cout << "Write two numbers separated by space" <<endl;
  cin >>number1 >> number2;
  cout << "Numbers before swapping."<<endl;
  cout << "Number 1="<< number1 <<", Number 2 =" <<number2<<endl;
  temp=number1;
  number1=number2;
  number2=temp;

  cout << "Numbers after swapping." <<endl;
  cout << "Number 1 =" << number1 << ", Number 2 =" <<number2<<endl;



int date;
cout<< "Enter a date" <<endl;
cin>> date; */

    /*if (date> 0 && date<32)
        cout <<"Date is valid"<<endl;
    else
        cout <<"Date is invalid"<<endl;


if (date !=10)
cout<< "Date is ok" << endl;
else if (date>0 && date <32 && date ==10)
cout<< "the date is your birthday"<<endl;
*/

    /*int mark;

    cout<<"Print your mark"<<endl;
    cin>> mark;

    mark>=35 ? cout<<"you are passed"<<endl : cout<<"you are failed"<<endl; // this is ternary operator (short form of if-else statement)
                                                                            // (only one if and else condition with only one instruction
                                                                            // could be executed with this ternary operator)
                                                                            // basic syntax is conditional expression ? True statement: false statement;
                                                                            // ternary operator is an expression and if structure is statement. Ternary operator can be assigned to a variable.
                                                                            // like :::: largest_number=(a>b ? a : b) ... in this statement (a>b ? a : b) is an expression (like a+b) which result is
                                                                            // stored in largest_number. This way IF structure couldn't be used.


*/

/*
char input='A';

while (input!='W')
{

cout<< "This is a tutorial"<<endl;
cout<< "what you are going to press??"<<endl;
cout <<  "If you press W you will be removed from this loop .. otherwise this loop is eternal for you ... hahahaha..lol"   <<endl;
cin>> input;

}

/*do     // Do .. while and while has this differences that in Do...while the statements under the conditions will be executed atleast one time despite the condition
       // ; where in while the statements will not be executed if the condition is not true at all


{
cout<< "This is a tutorial"<<endl;
cout<< "what you are going to press??"<<endl;
cout <<  "If you press W you will be removed from this loop .. otherwise this loop is eternal for you ... hahahaha..lol"   <<endl;
cin>> input;
} while(input!='W');

*/

/*
int marks[2][6]={
                    {35,45,85,95,75,25},
                    {78,98,62,41,65,76}

                    };

cout<< marks[0][5] <<endl<<marks[1][2]<<endl;
*/
int result=0;


result=dispaly(34,56);
cout << result<< endl;
result=dispaly(3,4);
cout << result<< endl;
result = dispaly(7,8);
cout << result<< endl;

result = dispaly(3,7);
cout << result<< endl;

display_character(10);
return 0;


}

/*
below is a function declaration
*/

inline void display_character(int vaiable1)

{

cout << vaiable1 <<endl;



}

int dispaly(int variable1, int variable2){   // variable1 and variable2 are functions parameters
                                             // it is possible to assign default values to parameters and
                                             //calling the function without passing values to that parameter
                                             // int display(int variable1, int variable2, int variable3=12)
                                             // variable3 has a default value so dispaly could be called with only 2 parameter.


cout <<"welcome to functions!!!"<<endl;
//cout << variable1+variable2<<endl;
return variable1+variable2;

}

void function_scope()
{

//variable could be declared in side of a function, as a parameter of a function , outside of a function. Local variable are
//those variables which are declared inside a function or parameter of a function. Global variables are those variables which are declared outside
// of the function.
// {.....} is considered as a block and variables that declared inside a block, that is only accessible by only that block
// globally declared variable has initial value of 0 but locally declared variable has initial value of garbage quantity


}
