/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int basamakToplami(int sayi){
    if(sayi==0){
        return 0;
    }
    return (sayi%10)+basamakToplami(sayi/10);
}
int main()
{
    int sayi,toplam;
    
    printf("Bir tam sayi giriniz: ");
    scanf("%d", &sayi);
    
    toplam=basamakToplami(sayi);
    
    printf("Basamaklar toplami:%d\n", toplam);
    return 0;
}