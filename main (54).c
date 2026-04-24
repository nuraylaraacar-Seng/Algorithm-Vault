/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int arraySum(int *arr,int size){
  int sum=0;
  for(int i=0;i<size;i++){
      sum+=*(arr+i);
  }
    return sum;
}
int main(){
int arr[]={1,2,3,4,5};
int size=sizeof(arr)/sizeof(arr[0]);
printf("Dizinin elemanlarının toplamı:%d\n",arraySum(arr,size));
return 0;
}
    
    
    
