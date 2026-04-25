/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int num1,num2,fark,bolum,kalan,result;
    
    printf("1.sayi: ");
    scanf("%d",&num1);
    printf("2.sayi: ");
    scanf("%d",&num2);
    
    fark=num1-num2;
    bolum=fark/7;
    kalan=fark%7;
    
    result=bolum*kalan;
    
    printf("Sonuc:%d\n", result);
    return 0;
}