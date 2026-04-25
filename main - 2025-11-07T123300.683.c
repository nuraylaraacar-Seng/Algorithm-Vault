/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num1,num2,num3,max,min;
    
    printf("Enter threee numbers:");
    scanf("%d%d%d",&num1,&num2,&num3);
    if(num1>num2&&num1>num3){
      max=num1;
    }
    else if(num2>num1&&num2>num3){
      max=num2;
    }
    else{
        max=num3;
    }
    if(num1<num2&&num2<num3){
     min=num1;
    }
    else if(num2<num1&&num2<num3){
     min=num2;
    }else{
    min=num3;
    }
    printf("en buyuk sayi:%d\n",max);
    printf("en kucuk sayi:%d\n",min);

    return 0;
}