#include<iostream.h>
#include<conio.h>
#include<stdlib.h>

void createT(struct node*);
void inorder(struct node*);
void preorder(struct node*);
void postorder(struct node*);

  struct node
{
 char data;
 struct node*left;
 struct node*right;
}*root=NULL;


   void createT ()
{
   struct node *p1, *p2, *p3 ,*p4, *p5,*p6;
   p1=(struct node*)malloc(sizeof(struct node));
   p2=(struct node*)malloc(sizeof(struct node));
   p3=(struct node*)malloc(sizeof(struct node));
   p4=(struct node*)malloc(sizeof(struct node));
   p5=(struct node*)malloc(sizeof(struct node));
   p6=(struct node*)malloc(sizeof(struct node));


   root->data='P';

   p1->data='Q';
   p1->left=p1->right=NULL;
   p2->data='R';
    p2->left=p2->right=NULL;
   p3->data='S';
    p3->left=p3->right=NULL;
   p4->data='T';
    p4->left=p4->right=NULL;
   p5->data='U';
    p5->left=p5->right=NULL;
   p6->data='V';
    p6->left=p6->right=NULL;

   root->left=p1;
   root->right=p2;

   p1->left=p3;
   p1->right=p4;

   p2->left=p5;
   p2->left=p6;
}
//return root;




   void inorder(struct node *t)
{
  //   cout<<"Inorder"<<endl;
 if(t==NULL)
 return;
 else


 inorder(t->left);
  cout<<t->data<<endl;
 inorder(t->right);

}



   void preorder(struct node *t)
{
//cout<< "preorder"<<endl;
 if(t==NULL)
 return;
 else

  cout<<t->data<<endl;
 preorder(t->left);

 preorder(t->right);

}
	void postorder(struct node *t)
{
//cout<< "postorder"<<endl;
 if(t==NULL)
 return;
 else


 postorder(t->left);

 postorder(t->right);
  cout<<t->data<<endl;


}


 void main()
 {

clrscr();
// struct node*t;
//t=

//struct node *root=NULL;
createT();

/* createT();
 createT();
 createT();
 createT();
createT();    */
     cout<<"Inorder"<<endl;
 inorder(root);

/* cout<<"preorder"<<endl;
 preorder(root);
 cout<<"Postorder"<<endl;
 postorder(root);        */

 getch();

 }
