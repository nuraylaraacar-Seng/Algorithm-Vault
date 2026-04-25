/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>

int main()
{
    char word1[200];
    char word2[100];
    int length;
    
    printf("Enter the first word: ");
    scanf("%s", word1);
    
    
    printf("Enter the two word:  ");
    scanf("%s", word2);
    
    strcat(word1, word2);
    
    length=strlen(word1);
    
    printf("compund word:%s\n", word1);
    printf("Lenght:%d\n", length);

    return 0;
}