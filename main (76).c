/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void swap(int *n1,int *n2);
int main()
{
int num1=5,num2=10;

//num1 ve num2'nin adresleri swap() fonksiyonuna göndeririz
swap(&num1,&num2);

printf("num1=%d\n",num1);
printf("num2=%d",num2);
return 0;
}
void swap(int *n1,int *n2){
int temp;
temp=*n1;
*n1=*n2;
*n2=temp;
}