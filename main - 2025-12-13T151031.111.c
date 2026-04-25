/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
//Call by referance
//find max min
void maxMinBul(int dizi[],int size, int *max, int *min){
    *max=dizi[0];
    *min=dizi[0];
    
    for(int i=1;i<size;i++){
    if(dizi[i]>*max) *max=dizi[i];
    if(dizi[i]<*min) *min=dizi[i];
    }
}

int main(){
    int numbers[]={34,12,89, 5, 67, 23};
    int max, min;
    
    maxMinBul(numbers, 6, &max, &min);
    
    printf("En Buyuk:%d\n", max);
    printf("En kucuk:%d\n", min);
    
    return 0;
}









