/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num,i=1,kucuk=0,buyuk=0;
    
    do{
    printf("%dth number:",i);
    scanf("%d",&num);
    
    if(num==0) break;
    if(num<kucuk) kucuk=num;
    if(num>buyuk) buyuk=num;
    i++;
    }while(num!=0);
    
    printf("en buyuuk sayi:%d\n",buyuk);
    printf("en kucuk sayi:%d\n ",kucuk);
    return 0;
}