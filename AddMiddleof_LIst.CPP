#include<iostream.h>
#include<conio.h>
#include<stdlib.h>

void create();
void print();
void display();

  struct node
{
  int data;
  struct node*next;
}*head=NULL;

void create()
{
    char ch;
do
{
 struct node*temp,*curr;
 temp=(struct node*)malloc(sizeof(struct node));
 cout<<"Enter temp data"<<endl;
 cin>>temp->data;
 temp->next=NULL;

   if(head==NULL)               //if list is empty
 {
    head=temp;
    curr=temp;
 }
  else
 {
  curr->next=temp;
  curr=temp;
 }
 cout<<"If you want to insert new node press y else press n"<<endl;
 cin>>ch;
 }
 while(ch!='n');
 }

 void display()
{
    struct node *temp;
    int i=0,pos;

    cout<<"The link list is"<<endl;

    temp=head;
    while(temp->next!=NULL)
  {
     i++;
     cout<<i<<" "<<temp->data<<endl;

     temp=temp->next;
  }
   ++i;
   cout<<i<<" "<<temp->data<<endl;

}


 void print()     //finds mid and add an element at mid
{
    struct node *temp,*ptr,*newptr,*nxt;
    int i=0,pos;
    temp=head;
    while(temp->next!=NULL)
  {
     i++;
     temp=temp->next;
  }
     ++i;
   ptr=head;
   cout<<"number of items are "<<i<<endl;
   if(i%2!=0)
   pos=(i+1)/2;   //number of nodes is odd
   else
   pos=i/2;       //number of nodes even


   cout<<"mid found at "<<pos<<endl;
   int t=1;
   while(t!=pos)
   {
     t++;
     ptr=ptr->next;

   }
   cout<<"mid element is "<<ptr->data<<endl;

   nxt=ptr->next;
   newptr=(struct node*)malloc(sizeof(struct node));
   cout<<"Enter number for new node "<<endl;
   cin>>newptr->data;
   newptr->next=nxt;
   ptr->next=newptr;

}




 void main()
 {
  clrscr();
create();
display();
print();
display();

  getch();
 }
