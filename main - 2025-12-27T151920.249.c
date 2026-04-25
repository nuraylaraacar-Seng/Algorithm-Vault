/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int ikiliktaban(int);
int main()
{
    int num;
    
    printf("Enter the number\n");
    scanf("%d",&num);
    
    ikiliktaban(num);
    
    return 0;
}
int ikiliktaban(int a){
    
    if(a>0)    
    {
    ikiliktaban(a/2);
    printf("%d",a%2);
    }
}
