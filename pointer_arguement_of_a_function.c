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
