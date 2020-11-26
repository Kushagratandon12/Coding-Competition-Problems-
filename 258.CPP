#include<iostream.h>
#include<conio.h>
using namespace std;
int main()
{
  int num=38;
  int sum=num%10;
  sum+=num/10;
  cout<<sum;
  int sum1=sum%10;
  sum1+=sum/10;
  cout<<"\n"<<sum1;
  return 0;
}

