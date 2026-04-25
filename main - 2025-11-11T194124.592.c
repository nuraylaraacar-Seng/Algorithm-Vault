/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int x,y,z,sum;
    
    printf("Üç sayi giriniz: ");
    scanf("%d %d %d ",&x,&y,&z);
    
    sum=(x*x)+(y*y)+(z*z);
    
    printf("Kareler toplami=%d\n",sum);
    
    return 0;
}