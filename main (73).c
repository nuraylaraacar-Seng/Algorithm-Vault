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
int n,i,*ptr,sum=0;

printf("Eleman sayısını giriniz:");
scanf("%d",&n);

ptr=(int*)malloc(n*sizeof(int));
//bellek tahsis edilmezse
if(ptr==NULL){
printf("Hata! Bellek tahsis edilemedi.");
exit(0);
}

printf("Elemanları giriniz: ");
for(i=0;i<n;++i){
scanf("%d",ptr+i);
sum+=*(ptr+i);
}

printf("Toplam:%d",sum);
//belleği serbest bırakmak için kullanıyoruz
free(ptr);
return 0;
}