/*A betting game
  author: Jamil Hasibul
  Date: 06/18/2018

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int Balance=100;
void play (int bet_amount);
int main()

{
    printf("Virtual casino here you Morons!!!! \n \n");
    printf("Hello !!! welcome to the bet game !\n");
    int min_bet=2, bet_amount=2;

    printf("Minimum Bet is %d $ \n",min_bet);

    while(Balance> 0)
    {
    printf("How much you want to bet??   $\n");
    scanf("%d", &bet_amount);

    if (bet_amount>Balance||bet_amount<min_bet)
    {

    printf("you don't have that much balance or your bet is below minimum!!!!\n");
    printf("........@@@######@@@........\n\n");
    break;

    }

    play(bet_amount);

    }




    return 0;
}

void play (int bet_amount)

{
 // char deck[]={'j', 'q', 'k'};

  char *deck= (char*)malloc(100000*sizeof(char));
  deck[0]='j';deck[1]='q';deck[2]='k';
  int bet_position;
  printf("Bet your position... - 1 2 3 \n");
  scanf("%d", &bet_position);
  printf("shuffling ........\n");
  srand(time(NULL)); // for seed generation of random number
  int i;
  for(i=0;i<5;i++)                     //shuffling process
  {
  int position_randomized_x=rand()%3;
  int position_randomized_y=rand()%3;
  char temp=deck[position_randomized_x];
  deck[position_randomized_x]=deck[position_randomized_y];
  deck[position_randomized_y]=temp;
  }

  if (deck[bet_position-1]=='q')
  {
  Balance+=3*bet_amount;
  printf("You Win ... the positions are %c %c %c ... your balance is %d $\n", deck[0],deck[1],deck[2],Balance);
  printf("........@@@######@@@........\n\n");
  }

  else
  {
   Balance-=bet_amount;
   printf("You loose ... the positions are %c %c %c ... your balance is %d $\n", deck[0],deck[1],deck[2],Balance);
   printf("........@@@######@@@........\n\n");
  }




}
