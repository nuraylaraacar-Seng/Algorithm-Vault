/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int notuTopla(int dizi[][3], int ogrenci, int sinav){
    if(sinav==3){
        return 0;
    }
    return dizi[ogrenci][sinav]+notuTopla(dizi, ogrenci, sinav+1);
}
int main()
{
   int notlar[5][3];
   float sToplam=0,sOrt;
   int i,j, oToplam;
    
    for(i=0;i<5;i++){
        printf("%d.öğrencini notlari: ",i+1);
        for(j=0;j<3;j++){
            scanf("%d", &notlar[i][j]);
        }
    }
    for(i=0;i<5;i++){
        
        oToplam=notuTopla(notlar, i, 0);
        float oOrt=oToplam/3.0;
        printf("%d. Ogrenci Ort: %.2f\n",i+1, oOrt);
        sToplam+=oOrt;
    }
    
    sOrt=sToplam/5.0;
    printf("\n sinif Ortalamasi: .%2f\n", sOrt);
    
    
      return 0;
}