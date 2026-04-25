/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int taban,us,i;
    long long result=1;
    
    printf("Taban degerini giriniz: ");
    scanf("%d",&taban);
    
    printf("Us degerini giriniz: ");
    scanf("%d",&us);
    
    if(us<0){
    printf("Negatif ud degeri desteklenmiyor!\n");
    }
    
    for(i=0;i<us;i++){
    result=result*taban;
    }
    printf("%d^%d=%ll\n",taban,us,result);
    return 0;
}