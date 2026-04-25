/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int enBuyukBul(int dizi[], int boyut){
     int eb=dizi[0]; 
     for(int i=1;i<boyut;i++){
         if(dizi[i]>eb){
             eb=dizi[i];
         }
     }
return eb;    
}

int enKucukBul(int dizi[], int boyut){
    int ek=dizi[0];
    for(int i=1;i<boyut;i++){
        if(dizi[i]<ek){
            ek=dizi[i];
        }
    }
    return ek;
}
int toplamHesapla(int dizi[],int boyut){
    int t=0;
    for(int i=0;i<boyut;i++){
        t+=dizi[i];
    }
    return t;
}
float ortalamaHesapla(int dizi[], int boyut){
    return (float)toplamHesapla(dizi, boyut)/boyut;
}



int main()
{   
   
   int dizi[10];
   int i;
   
   printf("10 elemanli diziyi giriniz:\n");
   for(i=0;i<10;i++){
       scanf("%d", &dizi[i]);
   }
   
   printf("En buyuk deger:%d\n",enBuyukBul(dizi, 10));
   printf("En kucuk deger:%d\n",enKucukBul(dizi, 10));
   printf("Toplam:%d\n",toplamHesapla(dizi, 10));
   printf("Ortalama:%.2f\n",ortalamaHesapla(dizi, 10));
   
    return 0;
}