/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int fact(int n);
int main(){
 int value;
 printf("Bir sayı değeri giriniz.");
 scanf("%d",&value);
 printf("%d!=%d\n",value,fact(value));
 return 0;
} 
int fact(int n){
int f;    
if(n==1){
f=1;
}
else{
f=n*fact(n-1);
}
return f;
}
    
    
    
    




