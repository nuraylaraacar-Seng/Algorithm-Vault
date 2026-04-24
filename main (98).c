/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
enum mainColors{
Red,   
Blue,
Yellow    
};

enum mainColors pixel;

pixel=Blue;

if(pixel==Red){
printf("Red pixel");
}
else if(pixel==Blue){
printf("Blue pixel");
}
else{
printf("Yellow pixel");
}

return 0;
}