// Binary Search tree All Operation in single Code      "Prince Yadav"
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
//Structure of Nodes
struct node{
  int data;
  struct node *left,*right;
};
//Creating Nodes
struct node* createNode(int n)
{
  struct node* newnode;
  newnode= (struct node*) malloc (sizeof(struct node));
  newnode->data=n;
  newnode->left=newnode->right=NULL;
  return newnode;
}
//Insert the data in Binarya tree
struct node * insertNode(struct node *root, int n)
{
  // case 1 When enter first element.
  if(root==NULL)
    root=createNode(n);
  // case 2 When comming data less than root data.  
  else if(n<root->data)
    root->left=insertNode(root->left,n);
  // case 3 When comming data grater than root data. 
  else if(n>root->data)
    root->right=insertNode(root->right,n);
  return root;      
}
// Display the data in preorder[NLR].
void preoder(struct node *root)
{
  if(root!=NULL){
    printf("%d ",root->data);
    preoder(root->left);
    preoder(root->right);
  }
}
// Display the data in In-Order[LNR].
void InOrder(struct node *root)
{
  if(root!=NULL){
    InOrder(root->left);
    printf("%d ",root->data);
    InOrder(root->right);
  }
}
// Display the data in Post-Order[LRN].
void PostOrder(struct node *root)
{
  if(root!=NULL){
    PostOrder(root->left);
    PostOrder(root->right);
    printf("%d ",root->data);
  }
}
// Serach the Particular key in Binary tree.
struct node* SearchNode(struct node *root, int key)
{
  //case 1 When key found in first node (root).
  if(root==NULL || key==root->data)
   return root;
  //case 2 When key found in right node or subtree.
  else if(key>root->data)
   return SearchNode(root->right,key);
  //case 3 When key found in left node or sab tree.
  else if(key < root->data)
   return SearchNode(root->left,key); 
}
// Find the Minimum Value of tree.
struct node* FindMin(struct node *root){
  while(root->left!=  NULL)
   root=root->left;
   return root;
  }
  // Delete the nodes from binary tree.
 struct node* DeleteNode(struct node *root, int data){
  if(root==NULL)
   return root;
  else if(data < root->data) 
   root->left=DeleteNode(root->left,data);
  else if(data > root->data) 
   root->right=DeleteNode(root->right,data); 
  else{
    // Case 1:  No child
    if(root->left==NULL && root->right==NULL){
      free(root);
      root =NULL;
      }
      //Case 2: One child 
    else if(root->left==NULL){
      struct node *temp = root;
      root=root->right;
      free(temp);
    }  
    else if(root->right==NULL){
      struct node *temp=root;
      root=root->left;
      free(temp);
    }
      // case 3: 2 children
    else{
      struct node *temp = FindMin(root->right);
      root->data = temp->data;
      root->right =DeleteNode(root->right, temp->data);
    }
  }
  return root; 
 } 
int main()
{ 
   struct node *root=NULL,*temp;
  int ch,n,key;
  while(1){
  printf("1. For Inseration \n");
  printf("2. For Pre-Order \n");
  printf("3. For In-Order \n");
  printf("4. For Post-Order \n");
  printf("5. For Searching \n");
  printf("6. Enter The Key which u want to delete \n");
  printf("7. For Exit \n");
  printf("Enter Choice \n");
  scanf("%d",&ch);
  switch(ch)
  {
    case 1:
    printf("Enter The Data : ");
    scanf("%d",&n);
    root=insertNode(root,n);
    break;
    case 2:
    preoder(root);
    getch();
    break;
    case 3:
    InOrder(root);
    getch();
    break;
    case 4:
    PostOrder(root);
    getch();
    break;
    case 5:
    printf("Enter The Key value :");
    scanf("%d",&key);
    temp=SearchNode(root,key);
    if(temp!=NULL)
      printf("Given Key is aviavible in Tree.\n");
    else 
      printf("Given Key Not Found.\n");  
    getch();  
    break;
    case 6:
    printf("Enter the Key Value which want to delete.");
    scanf("%d",&key);
    temp=DeleteNode(root,key);
    printf("Node is deleled.");
    getch();
    break;
    case 7:
    exit(0);
  }
  }
  return 0;
}
