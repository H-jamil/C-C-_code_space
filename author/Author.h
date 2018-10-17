#ifndef AUTHOR_H
#define AUTHOR_H

#include<string>

using namespace std;


class Author
{
    public:
        Author(string name, string email, char gender);
        void setEmail(string email);
        string getName() const;
        string getEmail() const;
        char getGender() const;
        void print() const;

        virtual ~Author();

    protected:

    private:

          string name;
          string email;
          char gender;
};

#endif // AUTHOR_H
