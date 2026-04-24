#include <stdio.h>
#include <stdlib.h>
void BirlikCevir(int);
void OnlukCevir(int);

int main()
{
int number=0,d1,d2,d3,d4;
while(number!=-1){
   printf("\nEnter a four digit number:");
   scanf("%d",&number);
   if(number==-1)break;
   d1=number%10;//birler
   d2=(number%100)/10;//onlar
   d3=(number%1000)/10;//yüzler
   d4=number/1000;//binler
   if(d4!=1){
   if(d4!=0) BirlikCevir(d4);
   printf(" Bin ");
   }
   if(d3!=1){ 
   BirlikCevir(d3);
   if(d3!=0)
   printf("Yüz");
   }
   if(d2!=0){
   OnlukCevir(d2);
   }
   if(d1!=0){
   BirlikCevir(d1);
   }
return 0;
}
void BirlikCevir(int number){
   switch(number){
    case 1:printf("Bir");break;   
    case 2:printf("Iki");break;
    case 3:printf("Uc");break;
    case 4:printf("Dört");break;
    case 5:printf("Bes");break;
    case 6:printf("Alti");break;
    case 7:printf("Yedi");break;
    case 8:printf("Sekiz");break;
    case 9:printf("Dokuz");break;
   } 
void OnlukCevir(int number){
   switch(number){
    case 1:printf("On");break;
    case 2:printf("Yirmi");break;
    case 3:printf("Otuz");break;
    case 4:printf("Kirk");break;
    case 5:printf("Elli");break;
    case 6:printf("Altmis");break;
    case 7:printf("Yetmis");break;
    case 8:printf("Seksen");break;
    case 9:printf("Doksan");break;
   } 
}    
    
    
    
    
    
    
}