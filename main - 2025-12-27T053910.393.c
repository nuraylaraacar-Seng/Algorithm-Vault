/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int num;
    printf("3 basamaklı bir sayi giriniz: ");
    scanf("%d",&num);
    
    
    //Sayının rakamlarını ayırıyoruz
    int b1,b2,b3;
    b3=num%10;//birler
    num/=10;
    b2=num%10;//onlar
    num/=10;
    b1=num%10;//yüzler
    
    int sum=b1+b2+b3;
    
    
    printf("Girdiğiniz sayinin rakamlari toplami:%d\n",sum);
    
    return 0;
}