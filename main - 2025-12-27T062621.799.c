#include <stdio.h>
#include <stdlib.h>

void arrsum(int a[], int n);

int main()
{
    int array[100];
    
    // 1-100 arası rastgele 1,2,3 sayılarını atama
    for(int i = 0; i < 100; i++){
        array[i] = rand() % 3 + 1;
        printf("%d\n", array[i]);
    }

    // Dizideki sayıların sayısını hesapla ve yazdır
    arrsum(array, 100); 
    
    return 0;
}

void arrsum(int a[], int n){
    int count[3] = {0, 0, 0};
    
    for(int i = 0; i < n; i++){
        count[a[i]-1]++;
    }
    
    for(int i = 0; i < 3; i++){
        printf("%d rakamından %d adet var\n", i+1, count[i]);
    }
}
