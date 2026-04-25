/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 20

int main()
{
    int dizi[SIZE];
    int toplam=0;
    int buyuk=0,kucuk=0;
    
    srand(time(NULL));
    
    for(int i=0;i<20;i++){
        dizi[i]=rand()%100;
        toplam+=dizi[i];
    }
    double ortalama=(double)toplam/SIZE;
    printf("Ortalama:%.2lf\n", ortalama);
    
    for(int i=0;i<SIZE;i++){
        if(dizi[i]>ortalama){
            buyuk++;
        }
        else if(dizi[i]<ortalama){
            kucuk++;
        }
    }
    
    printf("Ortalamadan buyuk eleman sayisi:%d\n", buyuk);
    printf("Ortalamdan kucuk eleman sayisi:%d\n", kucuk);
    return 0;
}