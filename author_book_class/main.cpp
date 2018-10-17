#include <iostream>
#include "Book.h"
#include "Author.h"

using namespace std;

int main()
{
    Author peter("Peter Jones","peter.jones@outlook.com",'M');
    peter.print();

    Book cppDummy("Cpp for Dummies", peter, 19.99);
    cppDummy.print();

    cppDummy.setNumberInStock(23);
    cppDummy.print();

    cout<<cppDummy.getAuthor().getName()<<endl;
    cout<<cppDummy.getAuthorName()<<endl;
    cout<<cppDummy.getName()<<endl;


    Book moreCpp("More C++ for Dummies", peter, -19.99);
    moreCpp.print();

    return 0;
}
