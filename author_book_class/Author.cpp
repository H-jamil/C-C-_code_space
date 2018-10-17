#include<iostream>

#include "Author.h"
using namespace std;

// constructor with input validation

Author::Author(const string &name, const string &email, char gender):name(name){


if(gender=='m' || gender=='M'){  this->gender=gender;}
else if (gender=='m' || gender=='M'){  this->gender=gender;}
else {
     cout<< "Gender is undefined so selected gender is 'u'" <<endl;
     this->gender='u';
     }


setEmail(email);

}

void Author::setEmail(const string &email){

size_t index=email.find('@');
if (index!=string::npos && index!=0 && index!= email.length()-1)
    {
     this->email=email;

    }
else {cout<< "Invalid email ! email is set to empty string! "<<endl;

    this->email="";
    }

}
string Author::getName() const{

return this->name;
}
string Author::getEmail() const

{
return this->email;

}
char Author::getGender() const

{
return this->gender;

}


void Author::print() const{

cout<<name << " ("<<gender<<") at " <<email<<endl;

}


Author::~Author()
{
    cout<< "Destructor for " << this->name << " is called"<< endl;
}









