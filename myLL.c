#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

int main()
{
struct node *head, *new, *temp;
int choice =1;
head = NULL;
while(choice != 0){
new = (struct node*)malloc(sizeof(struct node));
printf("Enter data :");
scanf("%d",&new->data);
new->next = NULL;

if(head == NULL)
{
    head = temp = new;
}
else
{
    temp->next = new;
    temp = new;
}
printf("Do you wish to add new node, Type '1' for yes, '0' for no:");
scanf("%d",&choice);

}


temp = head;
printf("Linked List is created :\n");
while(temp != NULL)
{

printf("%d %u-->",temp->data,temp->next);
temp = temp->next;
}
printf("\n%u",head);
    return 0;
}