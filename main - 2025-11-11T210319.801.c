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
    
    printf("Bir pozitif tam sayi giriniz: ");
    scanf("%d",&num);

    printf("\nIslem Adimlari:\n");
    printf("%d",num);
    
    while(num>=10){
     while(num>0){
        sum+=(num%10);
        sum=sum/10;
     }
    num=sum;
    printf("->%d",num);
    }
printf("\n\nDijital Kok=%d\n",num);

    return 0;
}