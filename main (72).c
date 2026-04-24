/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
int *dizileri_birlestir(int[],int,int[],int);
int main(){
int i;
int liste_1[5]={6,7,8,9,10};
int liste_2[7]={13,7,21,34,51,43,7};
//pointer tanımlıyoruz sonucun döndürülmesi için    
int *ptr;

ptr=dizileri_birlestir(liste_1,5,liste_2,7);
//ptr isimli bir dizi olusturduk gibi dusun
for(i=0;i<12;i++){
printf("%d",ptr[i]);
}
printf("\n");
return 0;
}
int *dizileri_birlestir(int dizi_1[],int boyut_1,int dizi_2[],int boyut_2){
int *sonuc=(int*)calloc(boyut_1+boyut_2,sizeof(int));
int i,k;
//dizi 1 in degerleri atanıyor
for( i=0;i<boyut_1;i++){
sonuc[i]=dizi_1[i];
}
//dizi 2 nin degerleri atanıyor
for( k=0;k<boyut_2;i++,k++){
sonuc[i]=dizi_2[k];
}
return sonuc;
    
}