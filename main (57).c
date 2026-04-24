/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
bool isPalindrome(char *str){
int length=strlen(str);
char *start=str;
char *end=str+length-1;
while(start<end){
    if(*start!=*end){
      return false;
    }
    start++;
    end--;
}
return true;
}
int main(){
char str[]="radar";
if(isPalindrome(str)){
printf("Kelime palindromedur.\n");
}
else{
printf("Kelime palidrome değildir.\n");
}
return 0;
}