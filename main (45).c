/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
int i;
int *p;
p=&i;
p=10;


printf("i değişkenin değeri:%d",i);
printf("p değerinin gösterdiği adresin içindeki değer:%d",*p);
printf("i değişkeninin adresi:%p",&i);
printf("p değeri :%p ",p);


    return 0;
}