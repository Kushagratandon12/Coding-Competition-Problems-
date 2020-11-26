#include<iostream.h>
#include<conio.h>
void main()
{ clrscr();
  int ar[3][3];
  for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++)
    {
      cin>>ar[i][j];
    }
  }
  cout<<"Printing The Matrix\n";
  for(i=0;i<3;i++)
  {
   for(int j=0;j<3;j++)
   {
    cout<<ar[j][i]<<" " ;
   }
   cout<<"\n";
  }
 cout<<"\n";

for(i=0;i<3;i++)
{
for(int j=3;j>=0;j--)
{
cout<<ar[j][i]<<" ";
}
cout<<"\n";
}


getch();
}
