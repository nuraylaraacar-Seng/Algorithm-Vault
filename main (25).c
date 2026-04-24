/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>
union Veri{
int i;
float f;
char str[20];
};
int main(){
 union Veri veri;
 
 veri.i=10;
 veri.f=220.5;
 strcpy( veri.str, "C proglamlama Kursu");
 
 printf("Verinin büyüklüğü:%d\n",sizeof(veri));
 printf("Veri.i:%d\n",veri.i);
 printf("Veri.f:%.2f",veri.f);
 printf("veri.str:%s\n",veri.str);
 printf("\n.....\n");
 
 veri.i=103;
 
 printf("Verinin büyüklüğü:%d\n",sizeof(veri));
 printf("Veri.i:%d\n",veri.i);
 printf("Veri.f:%.2f\n",veri.f);
 printf("Veri.str:%s",veri.str);
 
 veri.i=-203.45;
 
 printf("Verinin büyüklüğü:%d\n",sizeof(veri));
 printf("Veri.i:%d\n",veri.i);
 printf("Veri.f:%.2f\n",veri.f);
 printf("Veri.str:%s",veri.str);
return 0;
}
 