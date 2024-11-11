#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};

typedef struct node* Node;

Node delete(Node );
Node add(Node ,int);
void display(Node root);

int main()
{
    int choice=0;
    Node root=NULL;
    while(1){
        int x=0;
        printf("\nPress 1 to Push 2 to Pop 3 to display\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: scanf("%d",&x);
                    root=add(root,x);
                    break;
            case 2:root=delete(root);
                   break;
            case 3: display(root);
                    break;
            default: return 0;
        }
    }
    
    return 0;
}
Node delete(Node root)
{
    if(root==NULL)
    {
        printf("Stack Underflow\n");
        exit(1);
    }
    else
    {
        Node temp=root;
        printf("Poped element %d",temp->data);
        root=root->next;
        free(temp);
        return root;
    }
}
Node add(Node root,int x)
{
    if(root==NULL)
    {
        Node temp=(Node)malloc(sizeof(struct node));
        temp->data=x;
        temp->next=NULL;
        return temp;
    }
    else
    {
        Node newnode;
        newnode=(Node)malloc(sizeof(struct node));
        newnode->data=x;
        newnode->next=root;
        root=newnode;
        return root;
    }
}
void display(Node root)
{
    if(root==NULL)
        printf("Stack is empty\n");
    else
    {
        
        while(root!=NULL)
        {
            printf("| %d |-->",root->data);
            root=root->next;
        }
    }
}