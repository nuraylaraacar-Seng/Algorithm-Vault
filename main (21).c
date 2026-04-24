/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
int main(){
int n,i,*isaretci,toplam=0;
printf("Toplanacak eleman sayısını giriniz: ");
scanf("%d",&n);
isaretci=(int*) malloc(n*sizeof(int));

if(isaretci==NULL){
printf("Hata! Bellek ayırma işlemi başarısız oldu");
return 1;
}
for(i=0;i<n;++i){
scanf("%d",isaretci+i);
toplam+=*(isaretci+i);
}
printf("Toplam=%d",toplam);
free(isaretci);
return 0;
}

