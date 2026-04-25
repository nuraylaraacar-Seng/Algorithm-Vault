/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
/*{12, 45, 7, 89, 23}
Adım adım:

Eleman	max1	max2
12	12	-∞
45	45	12
7	45	12
89	89	45
23	89	45
*/
void enBuyukIki(int dizi[], int boyut) {
    int max1 = dizi[0], max2 = -999999;
    
    for(int i = 1; i < boyut; i++) {
        if(dizi[i] > max1) {
            max2 = max1;
            max1 = dizi[i];
        }
        else if(dizi[i] > max2 && dizi[i] != max1) {
            max2 = dizi[i];
        }
    }
    printf("En buyuk: %d, Ikinci en buyuk: %d\n", max1, max2);
}
 int main() {
    int dizi[] = {12, 45, 7, 89, 23, 89, 3};
    int boyut = sizeof(dizi) / sizeof(dizi[0]);

    enBuyukIki(dizi, boyut);

    return 0;
}
