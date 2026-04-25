/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
int fib(int);
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a,result;
    printf("kacıncı fibonacci sayisi\n");
    scanf("%d",&a);
    
    result=fib(a);
    printf("result=%d\n",result);
    
    return 0;
}
int fib(int n){
    if(n==0||n==1){
        return n;
    }
    else{
        return fib(n-1)+fib(n-2);
    }
    
    
}







