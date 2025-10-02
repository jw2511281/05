#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int a;
  
  printf("정수 하나를 입력하시오 : ");
  scanf("%i", &a);
  
  if ( a > 0 )
     printf("양수입니다.");
  else if ( a == 0 )
     printf("0입니다.");
  else
     printf("음수입니다."); 
  
  system("PAUSE");	
  return 0;
}
