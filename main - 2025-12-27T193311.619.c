/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int notlar[5][3];
    float ogrenciToplam, sinifToplam=0;
    float ogrenciOrt,sinifOrt;
    int i,j;
    
    for(i=0;i<5;i++){
        ogrenciToplam=0;
        printf("%d. ogrencinin 3 notu giriniz: ",i+1);
    
      for(j=0;j<5;j++){
          scanf("%d", &notlar[i][j]);
          ogrenciToplam+=notlar[i][j];
      }
      ogrenciOrt=ogrenciToplam/3.0;
      printf("%d. Ogrenci Ortalamasi ",i+1,ogrenciOrt);
      sinifToplam+=ogrenciOrt;
}
     
     sinifOrt=sinifToplam/5.0;
     
     printf("\nSinif Genel Ortalamsi: %.2f\n",sinifOrt);

    return 0;
}