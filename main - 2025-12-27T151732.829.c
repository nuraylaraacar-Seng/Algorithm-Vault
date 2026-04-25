/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

long long power(int base, int ex){
    
    if(ex==0){
        return 1;
    }
    
    return base*power(base, ex-1);
}
int main()
{
   int base, ex;
   long long result;
   
   printf("Enter the base and exponent values: ");
   scanf("%d %d", &base, &ex);
   
   result=power(base, ex);
   
   printf("%d^%d=%lld\n", base, ex, result);
    return 0;
}