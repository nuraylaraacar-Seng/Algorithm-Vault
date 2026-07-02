/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
typedef struct Node{
 int data;
 
 struct Node*next;
}Node;
Node* create_node(int value){
  Node*new_node=(Node*)malloc(sizeof(Node));   
  if(!new_node){
    printf("Bellek ayırma işlemi başarısız!"); 
    exit(1);
  }
new_node->data=value;
new_node->next=NULL;
return new_node;
}
void insert_at_head(Node**head_ref,int value){
    Node*new_node=create_node( value);
    new_node->next=*head_ref;
    *head_ref=new_node;
}
void insert_at_tail(Node** head_ref,int value){
    Node* new_node=create_node(value);
    if(*head_ref==NULL){
    *head_ref=new_node; 
    return;
    }
Node*temp=*head_ref;
while(temp->next!=NULL){
    temp=temp->next;
  
}
  temp->next=new_node;
}
void print_list(Node* head){
    Node*temp=head;
    while(temp!=NULL){
    printf("%d-> ",temp->data);
    temp=temp->next;
    }
     
    printf("NULL\n");
}
int main(){
    Node*head=NULL;
    
    insert_at_head(&head,10);
    insert_at_head(&head,20);
    insert_at_tail(&head,30);
    insert_at_tail(&head,40);
    
    print_list(head);
    return 0;
}
