#include <stdio.h>
int factorial(int n){
int result=1;
for(int i=1;i<=n;i++){
    result*=i;
}
return result;
}
int main(){
int num;
printf("Lütfen bir sayı giriniz:");
scanf("%d",&num);
printf("Bu sayının factorial:%d",factorial(num));
    
return 0;    
    
}