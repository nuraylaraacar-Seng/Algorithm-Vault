/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
int main()
{
int *isaretci,n1,n2,toplam=0;
printf("Boyut giriniz: ");
scanf("%d",&n1);

isaretci=(int*) malloc(n1*sizeof(int));

printf("Ayrılan (Tahsis edilen) ilk Bellek Adresleri:\n");
for(int i=0;i<n1;++i){
  printf("%p\n",(void*) (isaretci+i));
  toplam += *(isaretci+i);
}
printf("\n Yeni Boyut giriniz:");
scanf("%d",&n2);

isaretci=realloc(isaretci,n2*sizeof(int));

printf("Ayrılan (Tahsis Edilen) Yeni Bellek Adresleri: ");
for(int i=0;i<n2;i++){
printf("%p\n",(void*) (isaretci+i));
toplam += *(isaretci+i);
}
free(isaretci);
    
return 0;    
}
