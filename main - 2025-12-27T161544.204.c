/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int notlar[5];
    int i;
    float sum=0,avg;
    
    printf("5 ogrencinin notlarini giriniz:\n");
    
    for(i=0;i<5;i++){
        printf("%d. ogrencinin notu: ",i+1);
        scanf("%d", &notlar[i]);
        sum+=notlar[i];
    }
    
    avg=sum/5;
    
    printf("\nSİNİF NOTLARİ----\n");
    
    for(i=0;i<5;i++){
        printf("%d. Ogrenci:%d\n",i+1,notlar[i]);
    }
    
    printf("Siinif ortalamasi: .%2f\n", avg);

    return 0;
}