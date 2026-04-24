/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void doubleElements(int *arr,int size);

void doubleElements(int *arr,int size){
for(int i=0;i<size;i++){
*(arr+i)*=2;
}

}
int main(){
int arr[]={1,2,3,4,5};
int size=sizeof(arr)/sizeof(arr[0]);

doubleElements(arr,size);

printf("İkiye katlanmış dizi: ");
for(int i=0;i<size;i++){
printf("%d",arr[i]);
}
printf("\n");
return 0;
}