#include<stdio.h>
int main()
{
  char*nam[];
  int len;

  printf("enter the charcters:");
  fgets(nam,sizeof(nam),stdin);

  for(int i=0;nam[i]!='\0';i++)
  {
   len++;
  }

  for(int i=1;i<=len/2;i++)
  {
   nam[len]=nam[i-1];
   nam[i-1]=nam[len-i];
   nam[len-i]=nam[len];
  }
   nam[len]='\0';

  printf("reverse string is:%s\n",nam);

  return 0;
}

