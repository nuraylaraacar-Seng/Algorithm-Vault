/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int i,j,temp,digit, f_sum, fact;
    
    printf("Strong numbers between 1 and 500:\n");
    
    for(i=1;i<=500;i++){
        temp=i;
        f_sum=0;
        
        while(temp>0){
            digit=temp%10;
            fact=1;
            for(j=1;j<=digit;j++){
                fact*=j;
            }
            f_sum+=fact;
            temp/=10;
        }
        if(f_sum==i){
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}