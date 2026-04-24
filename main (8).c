#include <stdio.h>
#include <stdlib.h>
int SayiCiftMi(int sayi){
  if((sayi%2==0)){
    return 1;
  }
  else{
    return 0;
  }
}
int main(){
 int sayi;
 printf("Sayı değerini giriniz:");
 scanf("%d",&sayi);
    
 if(SayiCiftMi(sayi)){
     printf("Çift Sayıdır.");
 } 
 else{
     printf("Tek Sayıdır");
 }
return 0;
}
