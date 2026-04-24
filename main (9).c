
#include <stdio.h>

int SayininKubunuHesapla(int sayi);
int main(){
int sayi;
float c;
 
 printf("lütfen bir sayı giriniz:");
 scanf("%d",&sayi);
 
 c=SayininKubunuHesapla(sayi);
 
 printf("%d sayısının kübü=%f",sayi,c);
 
return 0;
}
int SayininKubunuHesapla(int sayi){
return (sayi*sayi*sayi);
}