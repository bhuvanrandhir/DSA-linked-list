#include<stdio.h>
#include<stdlib.h>


struct node
{
    int data;
    struct node *next;
};
int main()
{
    struct node *head=NULL, *newnode, *temp;
    int choice;
    while(choice)
    {
      temp=head;
      while(temp!=0)
      {
        printf("%d",temp->data);
        temp=temp->next;
        
      }
    }
    newnode=(struct node *)malloc(sizeof(struct node)); // DMA memory Allocation
    printf("Enter The Data");
    scanf("%d",&newnode->data);
    newnode->next=0;

    if(head==0)
    {
        head=temp=newnode;
    }else{
        temp->next=newnode;
        temp=newnode;
    }
     printf("Do you want to continue(0,1)?");
     scanf("%d", &choice);
    
    return 0;


}



















