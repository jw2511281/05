#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int a, b;
  
  printf("정수 하나를 입력하시오 : ");
  scanf("%i", &a);
  
  if ( a >= 0 )
     printf("절대값은 %i 입니다.", a);
  else
     b= -a ;
     printf("절대값은 %i 입니다.", b); 
  
  system("PAUSE");	
  return 0;
}
