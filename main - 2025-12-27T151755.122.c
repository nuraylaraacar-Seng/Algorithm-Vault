/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int num,temp, sum=0,digit;
    
    printf("pozitif bir sayi girin: ");
    scanf("%d", &num);
    
    temp=num;
    
    while(temp>0){
        digit=temp%10;
        sum+=digit;
        temp/=10;
    }
    
    printf("%d sayisinin basamaklari toplami: %d\n", num, sum);
    

    return 0;
}