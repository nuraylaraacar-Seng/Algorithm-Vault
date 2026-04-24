/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void reverseArray(int *arr,int size){
int *start=arr;
int *end=arr+size-1;
while(start<end){
int temp=*start;
*start=*end;
*end=temp;
start++;
end--;
}
}
int main(){
int size;
printf("Dizinin boyutunu girininiz:");
scanf("%d",&size);
printf("Dizinin elemanlarını giriniz:");
int arr[size];
for(int i=0;i<size;i++){
scanf("%d",&arr[i]);
}


reverseArray(arr,size);
printf("Ters çevrilmiş dizi:");
for(int i=0;i<size;i++){
 printf("%d",arr[i]);
}
    
    
    
}
    
    
    
    
