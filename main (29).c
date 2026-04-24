/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int f(int n){
if(n==0){
return 0;
}

printf("%d\n",n);
f(n-1);   
    
}
int main(){
 int sayi=10;
 f(sayi);
 return 0;
    
}