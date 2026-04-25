/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int num,sum, temp;
    
    printf("Enter the number: ");
    scanf("%d", &num);
    
    temp=num;
    
    while(temp>=10){
       sum=0; 
        while(temp>0){
            sum+=temp%10;
            temp/=10;
        }
        temp=sum;
    }
    printf("Dijital Kok=%d\n", temp);
    return 0;
}