/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
   int base, ex, i;
   long long result=1;
   
   printf("Enter the base and exponent values: ");
   scanf("%d %d", &base, &ex);   
   
   for(i=1;i<=ex;i++){
       result*=base;
   }
   
   printf("%d^%d=%lld\n", base, ex, result);
    return 0;
}