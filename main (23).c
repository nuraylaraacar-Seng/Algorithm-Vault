/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
int main()
{
int n,*isaretci,toplam=0;
printf("Toplanacak eleman sayısını giriniz: ");
scanf("%d",&n);

isaretci=(int*) calloc(n,sizeof(int));

if(isaretci==NULL){
printf("Hata! Bellek ayırma işlemi başarısız oldu");
exit(0);
}
printf("Toplanacak elemanları giriniz:");
for(int i=0;i<n;i++){
scanf("%d",isaretci+i);
toplam += *(isaretci+i);
}
printf("toplam=%d",toplam);
free(isaretci);
return 0;

    return 0;
}