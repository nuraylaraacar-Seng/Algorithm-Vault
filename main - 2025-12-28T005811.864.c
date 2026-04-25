/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{   
    char metin[500];
    int karakterSayisi=0, kelimeSayisi=1;
    int kucukHarf=0, buyukHarf=0, bosluk=0,aSayisi=0;
    int i;
   
   
    
    printf("Bir metin giriniz: ");
    gets(metin);//bosluklu metin alabilmek icin
    
    karakterSayisi=strlen(metin);
    
    for(i=0;i<karakterSayisi;i++){
        
        if(islower(metin[i])){
            kucukHarf++;
        }
        else if(isupper){
            buyukHarf++;
        }
        if(isspace(metin[i])){
            bosluk++;
            kelimeSayisi++;
        }
        if(metin[i]=='a'||metin[i]=='A'){
            aSayisi++;
        }
    }
    
    printf("Analiz Sonuclari:\n");
    printf("Toplam karakater sayisi:%d\n",karakterSayisi);
    printf("Kelime sayisi:%d\n",kelimeSayisi);
    printf("Kucuk harf sayisi:%d\n",kucukHarf);
    printf("Buyuk Harf sayisi:%d\n",buyukHarf);
    printf("Bosluk sayisi:%d\n", bosluk);
    printf("'A' veya 'a' sayisi:%d\n",aSayisi);
    return 0;
}