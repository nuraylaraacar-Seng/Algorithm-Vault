/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

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
int arr[]={1,2,3,4,5};
int size=sizeof(arr)/sizeof(arr[0]);
reverseArray(arr,size);
printf("Ters çevrilmiş dizi: ");
for(int i=0;i<size;i++){
    printf("%d ",arr[i]);
}

printf("\n");    
return 0;    
} 
    
