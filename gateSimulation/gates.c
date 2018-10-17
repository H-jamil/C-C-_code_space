
#include "gates.h"


bool and(bool x, bool y){
return (x&y);
}

bool or(bool x, bool y){
return (x|y);
}

bool nand(bool x, bool y){
return (~(x&y));
}

bool nor(bool x, bool y){
return (~(x|y));
}

bool xor(bool x, bool y){
return (x ^ y);
}

bool xnor(bool x, bool y){
return (~(x ^ y));
}

bool not(bool x)
{
if(x==1)return 0;
else return 1;

}

bool AND_N(bool *x,bool *y, int size, int divideFactor,int xDivideGroup,int yDivideGroup)
{

int n=size/divideFactor;
bool xResult=1;
bool yResult=1;


    if (xDivideGroup==0){
    for(int i=0;i<n;i++)
        {
         xResult=*(x+xDivideGroup*n+i)&xResult;
        }
    }

    else if(xDivideGroup==1){
    for(int i=0;i<n;i++)
        {
         xResult=*(x+xDivideGroup*n+i)&xResult;
        }
    }

    else if(xDivideGroup==2){
    for(int i=0;i<n;i++)
        {
         xResult=*(x+xDivideGroup*n+i)&xResult;
        }
    }

    else if(xDivideGroup==3){
    for(int i=0;i<n;i++)
        {
         xResult=*(x+xDivideGroup*n+i)&xResult;
        }
    }

  if (yDivideGroup==0){
    for(int i=0;i<n;i++)
        {
         yResult=*(y+yDivideGroup*n+i)&yResult;
        }
      }
  else if (yDivideGroup==1){
    for(int i=0;i<n;i++)
        {
         yResult=*(y+yDivideGroup*n+i)&yResult;
        }
    }

   else if (yDivideGroup==2){
    for(int i=0;i<n;i++)
        {
         yResult=*(y+yDivideGroup*n+i)&yResult;
        }
      }

   else if (yDivideGroup==3){
    for(int i=0;i<n;i++)
        {
         yResult=*(y+yDivideGroup*n+i)&yResult;
        }
    }


  return (xResult&yResult);
}


bool OR_N(bool *x,bool *y, int size, int divideFactor,int xDivideGroup,int yDivideGroup)
{

int n=size/divideFactor;
bool xResult=0;
bool yResult=0;

    if (xDivideGroup==0){
    for(int i=0;i<n;i++)
        {
         xResult=*(x+xDivideGroup*n+i)|xResult;
        }
    }

    else if(xDivideGroup==1){
    for(int i=0;i<n;i++)
        {
         xResult=*(x+xDivideGroup*n+i)|xResult;
        }
    }

    else if(xDivideGroup==2){
    for(int i=0;i<n;i++)
        {
         xResult=*(x+xDivideGroup*n+i)|xResult;
        }
    }

    else if(xDivideGroup==3){
    for(int i=0;i<n;i++)
        {
         xResult=*(x+xDivideGroup*n+i)|xResult;
        }
    }

  if (yDivideGroup==0){
    for(int i=0;i<n;i++)
        {
         yResult=*(y+yDivideGroup*n+i)|yResult;
        }
      }
  else if (yDivideGroup==1){
    for(int i=0;i<n;i++)
        {
         yResult=*(y+yDivideGroup*n+i)|yResult;
        }
    }

   else if (yDivideGroup==2){
    for(int i=0;i<n;i++)
        {
         yResult=*(y+yDivideGroup*n+i)|yResult;
        }
      }

   else if (yDivideGroup==3){
    for(int i=0;i<n;i++)
        {
         yResult=*(y+yDivideGroup*n+i)|yResult;
        }
      }

    return(xResult|yResult);
}



