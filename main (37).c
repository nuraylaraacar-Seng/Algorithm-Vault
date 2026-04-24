/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
//swap=değiştirme/takas demek
void swap(int *a,int *b){
int temp=*a;
*a=*b;
*b=temp;
}
int main(){
int x=5,y=10;
printf("Before changing:x=%d,y=%d",x,y);
swap(&x,&y);
printf("After changing:x=%d,y=%d",x,y);
return 0;
}