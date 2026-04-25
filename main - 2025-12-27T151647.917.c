/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
   int n,i,j;
   
   printf("N degerini giriniz: ");
   scanf("%d", &n);
   
   printf("%d*%d CARPIM TABLOSU:\n", n, n);
   
   printf("  ");
   for(i=1;i<=n;i++){
       printf("%d |", i);
       for(j=1;j<=n;j++){
           printf("%d\t", i*j);
       }
       printf("\n");
   }

    return 0;
}