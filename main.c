#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int answer=59;
  int x; 
  int trial=0;
  
  do
  {
      printf("Input a number : ");
      scanf("%i", &x);
      
      if (x > answer){
         printf("high\n");
         trial += 1;
         }
      else if (x < answer) {
           printf("low\n");
           trial += 1;
           }
  }
  while( x != answer);
  
  trial += 1;
  
  printf("Congratulation! trial : %i", trial);
  
    
  system("PAUSE");	
  return 0;
}
