/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>


int kuvvet(int a, int n){
   //BASE CASE
   if(n==0)  return 0; 
    
   //RECURSIVE STEP
   return a*kuvvet(a, n-1);    
}


int main()
{
    
    int taban=2;
    int us=5;
    
    int sonuc=kuvvet(taban, us);
    
    printf("%d^%d=%d\n", taban, us, sonuc);
    
    
    //Test durumları
    printf("\nDiger Testler:\n");
    printf("3^4=%d\n", kuvvet(3, 4));
    printf("5^3=%d\n", kuvvet(5,3));
    printf("2^0=%d\n", kuvvet(2,0));
    return 0;
}