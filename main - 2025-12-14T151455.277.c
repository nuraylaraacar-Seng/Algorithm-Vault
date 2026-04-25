/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int dizi[]={3,4,3,7,3,5,9,5,5};
    int n=9;
    
    int maxTekrar=0;
    int populerSayi=0;
    
    printf("Dizi: ");
    for(int i=0;i<n;i++) printf("%d ", dizi[i]);
    printf("\n\n");
  for(int i=0;i<n;i++){  
    int tekrarSayisi=0;
    
    
    //Bu sayını kaç kere geçtiğini say
    for(int j=0; j<n; j++){
        if(dizi[i]==dizi[j]){
            tekrarSayisi++;
        }
    }
    
    printf("Sayi %d: %d kere tekrar ediyor\n", dizi[i]);
    
    //En çok tekrqr edeni bul
    if(tekrarSayisi>maxTekrar){
        maxTekrar=tekrarSayisi;
        populerSayi=dizi[i];
    }
    
    //Aynı sayıyı tekrar yazdırmak için
    int dhaOnceBulundu=0;
    for(int k=0;k<i;k++){
        if(dizi[k]==dizi[i]){
            dhaOnceBulundu=1;
            break;
        }
    }
    if(dhaOnceBulundu) continue;    
} 
    printf("\n===========================\n");
    printf("EN POPULER SAYI:%d\n", populerSayi);
    printf("TEKRAR SAYISI:%d\n", maxTekrar);
    printf("==============================\n");
    return 0;
}