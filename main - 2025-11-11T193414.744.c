/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int x;
    printf("Bir sayi giriniz: ");
    scanf("%d",&x);
    
    x+=12;
    x*=4;
    x%=15;
    
    printf("son deger:%d\n",x);

    return 0;
}