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
int *ptr,*temp,i,n1,n2;
printf("Boyutu giriniz: ");
scanf("%d",&n1);

ptr=(int*)malloc(n1*sizeof(int));

if(ptr==NULL){
printf("Hata! Bellek tahsis edilemedi.");
}

printf("Önceden tahsis edilen belleğin adresleri:\n");
for(i=0;i<n1;++i){
printf("%p\n",ptr+i);
}
printf("\nYeni boyutu girin: ");
scanf("%d",&n2);
//Belleği yeniden tahsis etme
temp=(int*)realloc(ptr,n2*sizeof(int));
if(temp==NULL){
printf("Hata!,Bellek tahsis edilemedi.");
free(ptr);
return 1;
}

printf("Yeni tahsis edilen belleğin adresleri:\n");
for(i=0;i<n2;++i){
printf("%p\n",temp+i);
}
free(ptr);
return 0;
}