/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void tablo(int x){
if(x<=10){
for(int i=1;i<=10;i++){
printf("%-3d",x*i);
}
printf("\n");
return tablo(x+1);
}
}
int main(){
int x=1;
tablo(x);
return 0;
}
    
    
