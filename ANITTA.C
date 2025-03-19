#include<stdio.h>
#include<stdlib.h>
//node structure
struct node{
  int data;
  struct Node*new
  };
  //function to insert a new node at the end
Void insert End(struct Node** head,int data)
{
struct node*new,node=(struct Node*)malloc(size of(struct node));
  new_node->data=data;
  new_node->next=NULL;

  if(*head==NULL){
  *head=new_node;
  }else{
   struct Node*temp=*head;
     while(temp->next!=NULL)
     {
     temp=temp->next;
     }
     temp->next=new-node;
     }
     printf("element %d inserted at the end \n",data);
     }
     //function to insert at the beginning
     void insertbeginning(struct Node**head,int data){
     struct Node*new_node=(struct Node*)malloc(size of(struct Node));
     new_node->data=data;
     new_node->next=*head;
     *head=new_node;
     printf("element %d inserted at the beginning\n",data);
    //function to display the linked list
    void display(struct Node*head){
    if(head==NULL){
    printf("list is empty\n");
    return;
    }
     struct Node*temp=head;
     while(temp!=NULL){
     printf("%d->",temp->data);
     temp=temp->next;
    }
     printf("NULL\n");
    }
     void main() {
     struct node* head=NULL;
     int choice,value,pos,i;
     clrscr();
     do
     {
    //menu-driven option
     printf("Menu:\n");
     printf("1.insert at the end\n");
     scanf("%d",&value);
     insertEnd(&head,value);
    }
     getch();
    }
