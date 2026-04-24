/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
typedef struct Node{
int data;
struct Node* next;
}node;
void write_linkedlist(struct Node*){
 node* temp=n;  
 while(temp!=NULL){
 printf("%d ",temp->data);
 temp=temp->next;   
 }    

}
int main(){
Node* n=(node*)malloc(sizeof(node));
n->data=2;
n->next=NULL;

n->next=(node*)malloc(sizeof(node));
n->next->data=3;
n->next->next=NULL;    
    
printf("%d\n",n->data);    
printf("%d\n",n->next->data);    
    
printf("----------------------------------------------------\n");    
    
printf("%p\n",&n);    
printf("%p\n",n);    
printf("%p\n",&(n->data));    
printf("%p\n",&(n->next));    

printf("-----------------------------------------------------\n");

write_linkedlist(n);

return 0;
    
}






































































