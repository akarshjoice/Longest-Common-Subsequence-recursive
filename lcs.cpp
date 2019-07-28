#include <stdio.h>


int lcs(char s1[],char s2[],int i,int j)
  { 
  if((s1[i]=='\0') || (s2[j]=='\0')) return 0;
  else if(s1[i]==s2[j])
       return 1+ lcs(s1,s2,i+1,j+1);
  else 
       return max((lcs(s1,s2,i+1,j)),(lcs(s1,s2,i,j+1)));
  }
int max(int a,int b)
   {
     if(a>b)
         return a;
     else
         return b;     
   }
   
   void main() 
{ char s1[100],s2[100];
  printf("Enter String:");
  gets(s1);
   printf("Enter String:");
  gets(s2);
 printf("The longest Common Subsequence is:%d",lcs(s1,s2,0,0));

}