/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
//Görevi: Dizi elemanlarının toplamını bulur.(arraysum'ın)
int arraysum(int *arr,int size){
    
int sum=0;
for(int i=0;i<size;i++){
    sum+=*(arr+i);.
//Neden pointer?: Fonksiyon parametresine dizi gönderildiği için doğrudan adres (pointer) kullanılır, kopyalama yapılmaz, performans artar
}
return sum;
}
int main(){
    
int arr[]={1,2,3,4,5};
int size=sizeof(arr)/sizeof(arr[0]);//eleman sayısı için
printf("Dizi elemanlarını toplamı:%d\n",arraysum(arr,size));
return 0;
}