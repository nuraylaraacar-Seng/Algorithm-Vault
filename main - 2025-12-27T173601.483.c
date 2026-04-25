/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>


int getReverse(int num){
    
    int reverse=0;
    while(num>0){
        reverse=reverse*10+(num%10);
        num/=10;
    }
    return reverse;
}




int main()
{
    int sayi,tersi;
    
    printf("bir tam sayi giriniz:");
    scanf("%d", &sayi);
    
    tersi=getReverse(sayi);
    
    printf("Sayini tersi=%d\n", tersi);
    
    if(sayi==tersi){
        printf("Palildrome\n");
    }
    else{
        printf("is not Palidrome\n");
    }

    return 0;
}