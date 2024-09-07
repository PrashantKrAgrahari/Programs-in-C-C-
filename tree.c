#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

struct node
{
   struct node *left,*right;
   int data; 
};

struct node* create(int x)
{
    //int x;
    struct node *newnode;
    newnode =(struct node*)malloc(sizeof(struct node));
    /*printf("Enter Data(-1 for exit node):");
    scanf("%d\n", &x);
    if(x == -1)
    {
        return NULL;
    }
    */
    
    newnode->data = x;
    newnode->left =NULL;
    newnode->right = NULL;
    return newnode;
    

}

void inorder(struct node *root)
{

  if(root == NULL)
  {
    return;
  }

  inorder(root->left);
  printf("%d ", root->data);
  inorder(root->right);
}

void preorder(struct node* root)
{
  if(root == NULL)
  {
    return;
  }

  printf("%d ",root->data);
  preorder(root->left);
  preorder(root->right);
}

void postorder(struct node* root)
{
   
  if(root == NULL)
  {
    return;
  }

  postorder(root->left);
  postorder(root->right);
  printf("%d ",root->data);

}

/*

       Binary Tree is

          3
        /   \
       7     5
      / \     \
     8   1     2





*/

int main()
{
   struct node *root = NULL;
   root = create(3);
   struct node *p1 = create(7);
   struct node *p2 = create(5);
   struct node *p3 = create(8);
   struct node *p4 = create(1);
   struct node *p5 = create(2);

   root->left = p1;
   root->right = p2;
   p1->left = p3;
   p1->right = p4;
   p2->right = p5;


   printf("Inorder is:");
   inorder(root);

   printf("\nPreorder is:");
   preorder(root);

   printf("\nPostorder is:");
   postorder(root);

    return 0;
}
