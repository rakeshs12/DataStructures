#include<iostream.h>
#include<conio.h>

//linear search

 void linear_search(int m[],int n) {

 int i;

  for(i=0;i<n;i++){
  if(m[i]==89)
  cout<<"Rank is "<<i+1;
  }


 }

 void main(){

 clrscr();
 int marks[]={95,93,89,82,78};
 int size=5;
 linear_search(marks,size);
 getch();

 }
