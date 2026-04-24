/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
void ara(char *aranan){
node *p;    
p=head;    
previousnode=head;    
while(p->next!=NULL){
p=p->next;    
if(strcmp(p->adi,aranan)>=0){
perviousnode=p;
}    
}
}