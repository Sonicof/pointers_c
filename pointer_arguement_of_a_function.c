#include<stdio.h>
void print(char * C)
{
  int i=0;
  while(C[i] != '\0')
  {
    pritnf("%c",C[i]);
  }
  printf("\n");
}
void main()
{
  char C[20]="Hello";
  print(C);
}



#include<stdio.h>
void print(char * C)
{
  while(*C!= '\0')
  {
    pritnf("%c",*C);
    C++;
  }
  printf("\n");
}
void main()
{
  char C[20]="Hello";
  print(C);
}





