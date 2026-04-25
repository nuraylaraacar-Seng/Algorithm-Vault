/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int sumCalculator(int n);
int main()
{
  int n;
  
  do{
      printf("Pozitif bir tam sayi(N) giriniz: ");
      scanf("%d", &n);
  }while(n<0);
  
  printf("1 den %d'ye kadar olan sayilarin toplami=%d\n",n,sumCalculator(n));

    return 0;
}
int sumCalculator(int n){
    
    int i,sum=0;
    for(i=1;i<=n;i++){
        sum+=i;
    }
    return sum;
}





