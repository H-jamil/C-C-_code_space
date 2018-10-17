#ifndef BOOK_H
#define BOOK_H

#include<string>
#include "Author.h"

//using namespace std;

class Book
{
    public:
        Book(const std::string &name, const Author &author, double price=0, int numberInStock=0);

        std::string getName()const;
        Author getAuthor()const;
        double getprice()const;
        int getNumberInStock()const;
        void setPrice(double price);
        void setNumberInStock(int numberInStock);
        void print();
        std::string getAuthorName()const;
        virtual ~Book();

    protected:

    private:

        std::string name;
        Author author;
        double price;
        int numberInStock;

};

#endif // BOOK_H
