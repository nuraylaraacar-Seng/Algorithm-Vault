/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
    srand(time(0));
    
    int toplamCiro=0;
    
    printf("---MARKET FİŞİ SİMULASYONU---\n\n");
     
    for(int i=1;i<=8;i++){
       int harcama=rand()%181+20; //20-200 TL
       
       printf("Musteri %d:%d TL", i, harcama);
       
       if(harcama>=150){
           harcama*=0.85;
           printf("-> Indirim uygulandı:%d TL\n",harcama);
       }
       else if(harcama<50){
           harcama+=0.15;
           printf("-> Servis ucreti:%d TL\n",harcama);
       }
       else{
           printf("-> Normal fiyat\n");
       }
    
    toplamCiro+=harcama;
       
  }
    
    
    printf("\n===========================\n");
    printf("TOPLAM CİRO:%d TL\n",toplamCiro);
    printf("ORTALAMA HARCAMA: %.2f TL \n",toplamCiro/8.0);
    printf("==============================\n");
    
    
    
    
    return 0;
}