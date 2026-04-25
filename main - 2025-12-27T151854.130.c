/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>
int main()
{
    char s1[50],s2[50];
    
    printf("first word: ");
    scanf("%s",s1);
    
    printf("two word: ");
    scanf("%s",s2);
    
    strcat(s1,s2);
    
    printf("Compound word:%s\n",s1);
    printf("size:%d\n",strlen(s1));
    return 0;
}