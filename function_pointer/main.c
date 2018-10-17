#include <stdio.h>
#include <stdlib.h>


int Add(int a, int b)   // this is a function which we will point through pointer

{

  return a+b;

}

int *kl (int , int); // this is a function prototype that will take two integer and will return a pointer to an integer

void helloworld(char *name)

{
printf("This would be an example of function pointer %s\n",name);
}

int main()
{


    printf("Hello world!\n");

// creating a function pointer for Add function
int c;
int (*p)(int, int);  // this is the function pointer
                    // if we use int *p(int, int) that means we are declaring a function p that will return an pointer to integer.
p= & Add;

c=(*p)(2,8);  // could use    c=p(2,8);

void (*pl)(char*);

pl=& helloworld; //or we could use pl=helloworld;

pl("Jamil");

printf("%d\n",c);

return 0;
}
