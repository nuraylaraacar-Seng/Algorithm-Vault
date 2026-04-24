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
printf("Eleman sayısını girin:\n");
scanf("%d",&n);

ptr=(int*)malloc(n*sizeof(int));
if(ptr==NULL){
printf("Yeterli hafıza yok");
return 1;
}
printf("Dizi elemanlarını giriniz:\n");
for(i=0;i<n;i++){
scanf("%d",ptr+i);
sum +=*(ptr+i);
}
printf("Toplam=%d",sum);
free(ptr);
return 0;
}