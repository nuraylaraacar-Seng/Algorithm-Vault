/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int sum(int);
int main()
{
    int n,result;
    printf("Enter the number\n");
    scanf("%d",&n);
    
    result=sum(n);
    printf("result=%d\n",result);
    return 0;
}
int sum(int a){
    if(a==0){
        return a;
    }
    else{
        return a+sum(a-1);
    }
    
    
}