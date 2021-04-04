#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int num, numgues ,  att = 1;
    srand(time(0));
    num = rand()%100 + 1;
    printf("The number is %d\n", num);   
    do
    {  printf("Guess the number between 1 and 100 : ");
       scanf("%d", &numgues);
       if (numgues>num)
       {
           printf("Enter Smaller number \n");
       }
       else if (numgues < num)
       {
           printf("Enter Larger number \n");
       }
       else
       {
           printf("You Guessed the number %d in %d attempts.\n"  , numgues , att);
       }
       att += 1;
    } while (numgues!=num); 
    return 0;
}
