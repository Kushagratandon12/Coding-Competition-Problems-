#include<conio.h>
#include<string.h>
#include<iostream.h>
#define d 256

  void search(char pat[] , char txt[] , int q)
  {
    int M=strlen(pat);
    int N=strlen(txt);
    int i=0,j=0;
    int p=0;
    int t=0;
    int h=1;
     //generate the hash value for the hasing
	for(i=0;i<M-1;i++)
	   h=(h*d)%q;
    //calculate the hash value for the text and pattern
       for(i=0;i<M;i++)
		{
		    p=(d*p+pat[i])%q;
		    t=(d*t+txt[i])%q;
		}
      //slide the pattern over txt
      for(i=0;i<=N-M;i++)
		{
		   if(p==t)
		   {
		      for(j=0;j<M;j++)
			{
			   if(txt[i+j]!=pat[j])
			   break;
			}
		      if(j==M)
			cout<<"Pattern Found "<<i;
		   }

		   if(i<N-M)
		   {
		   t=(d*(t-txt[i]*h)+txt[i+M])%q;
		   if(t<0)
		   t=(t+q);
		   }
		}
      }


  int main()
  {
  clrscr();
  char txt[]="Geeks for Geeks";
  char pat[]="Geek";
  int q=101;
  search(pat,txt,q);
  getch();
  return 0;
  }