/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>

int main()
{
    char word[50],reverse[50];
    
    int size;
    
    printf("Enter the words: ");
    scanf("%s",word);
    size=strlen(word);
    for(int i=0;i<size;i++){
        reverse[i]=word[size-i-1];
    }
    reverse[size]='\0';
    if(strcmp(word,reverse)==0){
        printf("Palimdrome!\n");
    }
    else{
        printf("Palindrome is not.\n");
    }
    return 0;
}