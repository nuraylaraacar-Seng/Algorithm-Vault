/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int factorial(int n){
int result=1;
for(int i=1;i<=n;i++){
result*=i;
}
return result;
}
int main(){
int num=5;
printf("%d sayısını faktöriyeli:%d\n",num,factorial(num));
return 0;    
}