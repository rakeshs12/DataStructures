#include<iostream.h>
#include<conio.h>


 void bubble_sort(int s[],int n)
 {

 int temp;

 for(int i=0;i<n;i++){
 for(int j=i+1;j<n;j++)   {


      if(s[i]>=s[j]){
       temp=s[i];
       s[i]=s[j];
       s[j]=temp;
      }

 }
 }
for(i=0;i<n;i++)
cout<<s[i]<<" ";
 }



 int main () {
 clrscr();
 int score[]= { 20,34,48,14,22,16,72,60,52,44,32 };
 int size=11;
 for(int k=0;k<size;k++)
 cout<<score[k]<<" ";
 cout<<endl;
 cout<<"Scores in increasing order"<<endl;
 bubble_sort(score,size);
 getch();
 return 0;
 }
