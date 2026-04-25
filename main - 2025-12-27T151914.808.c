/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int binarysearch(int[],int,int,int);
int main()
{   
    int a[8]= {1,3,4,5,17,18,31,33 },result;
    
    result=binarysearch(a,17,0,7);
    
    
     if(result==1)
       printf("aranan deger dizi icindedir");

     else

       printf("aranan deger bulunamadi");

    return 0;
}
int binarysearch(int a[],int target,int min,int max){
    int mid;
    if(min>max){
        return -1;
    }
    mid=(min+max)/2;
    if(target==a[mid]){
        return 1;
    }
    else if(target<a[mid]){
        binarysearch(a,target,min,mid-1);
    }
    else if(target>a[mid]){
        binarysearch(a,target,mid+1,max);
    }
}




