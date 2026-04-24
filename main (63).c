/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void findMinMax(int *arr,int size,int *max,int *min){
*max=*min=*arr;//ilk başta dizinin max ve min elemanı olmadığı için arr(dizini ilk elemanınına) eşittir)
for(int i=1;i<size;i++){
    if(*(arr+i)>*max){
        *max=*(arr+i);//eğer dizi elemanı max tan büyükse max eleman o olur
    }
    if(*(arr+i)<*min){
        *min=*(arr+i);//eüğer dizi elemanı min den küçükse min eleman o olur
    }
}
}
int main(){
int arr[]={5,10,3,8,15};
int size=sizeof(arr)/sizeof(arr[0]);
int max,min;    
findMinMax(arr,size,&max,&min);
printf("En büyük eleman:%d\n ",max);
printf("En küçük eleman:%d\n",min);
return 0;    
}