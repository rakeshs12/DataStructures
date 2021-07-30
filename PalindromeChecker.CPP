#include<iostream.h>
#include<conio.h>
#include<stdlib.h>

int top=-1,ctr=1;
char stk[20];
char str[20];
int c[20];
int n=19;

void push(char val){

 if(top>=n)
 {
cout<<"Stack Overflow\n";
 }
else
top++;
stk[top]=val;
cout<<stk[top];
str[top]=stk[top];

}

void pop(){
      // int ctr=0;

      if(top==-1)
      cout<<"\nUnderflow\n";
      else
      cout<<stk[top];
      if(stk[top]==str[top])  {
      c[top]=ctr;
      top--;
      }

 //     cout<<"\npopped "<<stk[top];

}

void peek(){

int ctr=0;
for(int i=0;i<n;i++){
if(c[i]==1)
 ctr++;
 }
// peek();



 if(ctr>1)
 cout<<"\nString is a palindrome"<<endl;
 else
 cout<<"\nNot a palindrome"<<endl;
 }


 int main(){

 clrscr();

 cout<<"Input String\n";
 push('A');
 push('b');
 push('l');
 push('e');
 push('w');
 push('a');
 push('s');
 push('I');
 push('e');
 push('r');
 push('e');
 push('I');
 push('s');
 push('a');
 push('w');
 push('E');
 push('l');
 push('b');
 push('a');
 cout<<endl;
 cout<<endl;
 cout<<"Output String\n";
 for(int l=0;l<n;l++)
 {
 pop();
 }
/* pop();
 pop();
 pop();
 pop();
 pop();
 pop();
 pop();
 pop();
 pop();
 pop();
 pop();
 pop();
 pop();
 pop();
 pop();
 pop();
 pop();
 pop();    */

 cout<<endl;
 peek();
 getch();
 return 0;
 }
