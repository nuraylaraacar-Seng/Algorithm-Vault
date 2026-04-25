/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
   int n=4,f=1;
   while(n>=1)
   {
      f*=n; 
      n--;
   }
   printf("%d %d",f,n);

    return 0;
}