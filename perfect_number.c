/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int num, sum=0,i;
    
    printf("Enter the number: ");
    scanf("%d", &num);
    
    for(i=1;i<num;i++){
        if(num%i==0){
            sum+=i;
        }
    }
    if(sum==num){
        printf("%d is a perfect number.\n", num);
    }
    else{
        printf("%d is not a perfect number.\n", num);
    }
    return 0;
}