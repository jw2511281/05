#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int a, b;
  
  printf("���� �ϳ��� �Է��Ͻÿ� : ");
  scanf("%i", &a);
  
  if ( a >= 0 )
     printf("���밪�� %i �Դϴ�.", a);
  else
     b= -a ;
     printf("���밪�� %i �Դϴ�.", b); 
  
  system("PAUSE");	
  return 0;
}
