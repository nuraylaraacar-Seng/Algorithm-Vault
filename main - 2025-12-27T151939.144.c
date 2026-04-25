/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int fact(int);
int main()
{
    int m,result;
    printf("Enter the number:\n");
    scanf("%d",&m);
    
    result=fact(m);
    printf("result=%d\n",result);
    
    return 0;
}
int fact(int n){
    if(n==1||n==0){
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}