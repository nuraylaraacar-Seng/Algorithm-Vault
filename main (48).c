/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
int i,*iptr;
double y,*yptr;
iptr=&i;
printf("iptr gösterdiği adres:%p\n",iptr);
iptr++;
printf("iptr gösterdiği adres:%p\n",iptr);
yptr=&y;
printf("yptr gösteerdiği adres:%p\n",yptr);
yptr++;
printf("yptr gösterdiği adres:%p",yptr);
}