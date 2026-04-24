/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int Fibonacci(int n){
if(n==0){
return 0;
}
if(n==1){
return 1;
}
return Fibonacci(n-1)+Fibonacci(n-2);
}
int main(){
int n;
printf("Fibonaccinin n'ninci terimini giriniz:");
scanf("%d",&n);
printf("Fibonacci(%d):%d",n,Fibonacci(n));
return 0;
}
