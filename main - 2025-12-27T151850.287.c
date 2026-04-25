/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{  
    int num;
    
    printf("Enter An İnteger Number: ");
    scanf("%d",&num);
    
    num+=8;
    num*=5;
    num%=9;
     
    printf("Result:%d\n", num);
    return 0;
}