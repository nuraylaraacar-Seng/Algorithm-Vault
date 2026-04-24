/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>

int main()
{
double a,b,c,delta,kok1,kok2;
printf("Denklemin katsayılarını giriniz(a,b,c):");
scanf("%lf %lf %lf",&a,&b,&c);
delta=b*b-4*a*c;

if(delta>0){
kok1=(-b+sqrt(delta))/(2*a);
kok2:(-b-sqrt(delta))/(2*a);
printf("İki gerçel kök:%.2lf ve %.2lf\n",kok1,kok2);    
}
else if(delta==0){
kok1=-b/(2*a);
printf("Çift katlı kök:%.2lf\n",kok1);
}
else{
printf("Gerçel kök yoktur.\n");
}
return 0;
}