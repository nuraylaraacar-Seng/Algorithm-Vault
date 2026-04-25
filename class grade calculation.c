/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int notlar[4][3]={
        {85,90,78},
        {70,65,80}
        {95,88,91},
        {82,87,85},        
    };
    
    float ortalamalar[4];
    float maxOrt=0;
    int birinciOgrenci=0;
    
    printf("----SINIF BAŞARI RAPORU------\n\n");
    
    for(int i=0;i<4;i++){
    int toplam=0;
    
    printf("Ogrenci %d: ",i+1);
    for(int j=0;j<3;j++){
       printf("%d ", notlar[i][j]);
       toplam+=notlar[i][j];
    }
    
    ortalamalar[i]=toplam/3.0;
    printf("-> Ortalama: %.2f\n", ortalamalar[i]);
    
    if(ortalamalar[i]>maxOrt){
      maxOrt=ortalamalar[i];  
      birinciOgrenci=i;
    }
    }
    
    
    printf("\n===========================\n");
    printf("SINIF BİRİNCİSİ: Ogrenci %d\n", birinciOgrenci + 1);
    printf("ORTALAMASI: %.2f\n", maxOrt);
    printf("===========================\n");
    
    
    return 0;
}