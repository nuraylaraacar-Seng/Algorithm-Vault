/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int num;
    printf("Enter the numbers..\n");
    scanf("%d",&num);
    
    for(int i=2;i<=num;i++){
        while(num%i==0){
            printf("%d\n",i);
            num/=i;
        }
       
    }
    
    return 0;
}