#include <iostream>
#include "Book.h"

using namespace std;

        Book::Book(const string &name, const Author &author, double price, int numberInStock):name(name),author(author){

        setPrice(price);
        setNumberInStock(numberInStock);

        }

        string Book::getName()const{

        return name;
        }

        Author Book::getAuthor()const{

        return author;
        }
        double Book::getprice()const{

        return price;
        }
        int Book::getNumberInStock()const{

        return numberInStock;
        }
        void Book::setPrice(double price){

        if (price>0){
            this->price=price;

        }

        else {

            cout<<"Invalid price!! Price is set to 0!!" <<endl;
            this->price=0;
            }
        }

        void Book::setNumberInStock(int numberInStock){

        if (numberInStock>0||numberInStock==0){this->numberInStock=numberInStock;}
        else {cout<<"Invalid quantity!! Stock is set to 0"<<endl;
            this->numberInStock=0;

        }



        }
        void Book::print(){

        cout<<" '" << name << "' by " << endl;
        author.print();

        }
        string Book::getAuthorName()const{

        return author.getName();

        }

Book::~Book()
{
    cout<< "Destructor for " << this->name << " is called"<< endl;
}
