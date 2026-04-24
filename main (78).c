/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void addOne(int *ptr){
(*ptr)++;//*ptr değerine 1 eklenir
}
int main(){
int *p,i;
printf("Bir sayı giriniz:");
scanf("%d",&i);
p=&i;
addOne(p);

printf("%d", *p);//11
return 0;
}
