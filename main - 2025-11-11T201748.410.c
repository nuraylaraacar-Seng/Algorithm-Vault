/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,num,sum=0;
    
    printf("Bir pozitif tam sayi giriniz: ");
    scanf("%d",&num);
    
    if(num<=0){
    printf("Error!");
    return 1;
    }
    
    for(i=1;i<num;i++){
        if(num%i==0){
        sum+=i;
        }
    }
    if(sum==num){
    printf("%d bir MUKEMMEL sayidir.\n", num);
    }
    else{
    printf("%d MUKEMMEL sayi degildir,Bolenler toplami:%d\n",num,sum);
    }

    return 0;
}