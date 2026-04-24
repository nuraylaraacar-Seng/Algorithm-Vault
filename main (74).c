/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
int main()
{
int n,i,*ptr,sum=0;
printf("Eleman sayısını giriniz: ");
scanf("%d",&n);

ptr=(int*)calloc(n,sizeof(int));
if(ptr==NULL){
printf("Hata! Bellek adresi bulunamadı.");
}

printf("Elemanları giriniz:");
for(i=0;i<n;++i){
scanf("%d",ptr+i);
sum+=*(ptr+i);
}

printf("Toplam:%d",sum);
free(ptr);
return 0;

}