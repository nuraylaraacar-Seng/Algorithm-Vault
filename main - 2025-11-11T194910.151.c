/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num,sum=0;
    
    printf("Bir sayi giriniz: ");
    
    scanf("%d",&num);
    
    while(num!=0){
    sum+=num%10;
    num/=10;
    }
    printf("Basamak toplami:%d\n",sum);

    return 0;
}