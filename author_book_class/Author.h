#ifndef AUTHOR_H
#define AUTHOR_H

#include<string>

//using namespace std;


class Author
{
    public:
        Author(const std::string & name, const std::string & email, char gender);
        void setEmail(const std::string &email);
        std::string getName() const;
        std::string getEmail() const;
        char getGender() const;
        void print() const;

        virtual ~Author();

    protected:

    private:

          std::string name;
          std::string email;
          char gender;
};

#endif // AUTHOR_H

















