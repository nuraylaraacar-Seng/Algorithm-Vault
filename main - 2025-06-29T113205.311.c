/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
unsigned int x=3,y=1,sum,carry;
sum=x^y;//^ or opretörüdür toplama bakar
carry=x&y;//elde var mı ona bakar
while(carry!=0){
carry=carry<<1;//eldeyi 1 sola kaydırır
x=sum;
y=carry;    
sum=x^y;    
carry=x&y;    
}
printf("%d",sum);
getchar();
return 0;
}