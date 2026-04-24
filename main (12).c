#include <stdio.h>
#include <math.h>

int SayiAsalMi(int sayi);
int SayiArmstrongMu(int sayi);
int SayiMukemmelMi(int sayi);

int SayiAsalMi(int sayi){
    if(sayi <= 1){
        return 0;
    } 
    for(int i = 2; i < sayi / 2; i++){
        if(sayi % i == 0){
            return 0;
        }
    }
    return 1;
}

int SayiArmstrongMu(int sayi) {
    int orijinalSayi = sayi;
    int kalan, basamakSayisi = 0;
    float toplam = 0.0;

    while (orijinalSayi != 0) {
        orijinalSayi /= 10;
        basamakSayisi++;
    }

    orijinalSayi = sayi;


    while (orijinalSayi != 0) {
        kalan = orijinalSayi % 10;
        toplam += pow(kalan, basamakSayisi);
        orijinalSayi /= 10;
    }

   
    if ((int)toplam == sayi)
        return 1; 
    else
        return 0; 
}

int SayiMukemmelMi(int sayi){
    int toplam = 0;
    for(int i = 1; i < sayi; i++){
        if(sayi % i == 0){
            toplam += i;
        }
    }
    return (sayi == toplam);
}

int main(){
    int sayi;
    printf("Bir sayı giriniz: ");
    scanf("%d", &sayi);
    
    if(SayiAsalMi(sayi)){
        printf("%d bir asal sayıdır.\n", sayi);
    } else {
        printf("%d bir asal sayı değildir.\n", sayi);
    }
    
    if(SayiArmstrongMu(sayi)){
        printf("%d bir armstrong sayısıdır.\n", sayi);
    } else {
        printf("%d bir armstrong sayısı değildir.\n", sayi);
    }
    
    if(SayiMukemmelMi(sayi)){
        printf("%d bir mukemmel sayıdır.\n", sayi);
    } else {
        printf("%d bir mukemmel sayı değildir.\n", sayi);
    }

    return 0;
}
