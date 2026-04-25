/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>


//j=i+1 olmasını sebebi kendinden sonrakiyyle karşılaştırır
void tekrarBul(int array[], int size){
    printf("Tekrar Eden Sayilar: ");
    
    for(int i=0;i<size; i++){
      for(int j=i+1; j<size; j++){
          if(array[i]==array[j]){
            printf("%d ",array[i]);
            break;//aynı sayıyı tekrar yazdırma
        }    
      }
    }
 printf("\n");
}
int main()
{
   int numbers[]={1,2,3,4,5,3,6};
    tekrarBul(numbers, 8);
    return 0;
}