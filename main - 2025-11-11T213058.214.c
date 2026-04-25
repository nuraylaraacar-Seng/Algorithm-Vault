/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
int n,i,terim=1;
long long toplam=0;

printf("Kac Terim Toplansin?: ");
scanf("%d",&n);

printf("\nGeometrik Seri: ");

for(i=0;i<n;i++){
printf("%d",terim);
toplam=toplam+terim;

if(i<n-1)
printf(" + ");

terim=terim*2;

}
printf("=%lld\n",toplam);
return 0;
}