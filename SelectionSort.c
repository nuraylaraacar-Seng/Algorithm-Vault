/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void selectionSort(int arr[],int n){
int i,j,minIndex, temp;

    for(int i=0;i<n-1;i++){
      minIndex=i;
       for(int j=i+1;j<n;j++){
         if(arr[j]<arr[minIndex]){
          minIndex=j;
         }
       }
    temp=arr[i];
    arr[i]=arr[minIndex];
    arr[minIndex]=temp;
    }
   
}


int main()
{
int arr[]={64,25,12,22,11};
int n=sizeof(arr)/sizeof(arr[0]);
selectionSort(arr, n);

printf("Sorted array: ");
for(int i=0;i<n;i++)
printf("%d ",arr[i]);



    return 0;
}