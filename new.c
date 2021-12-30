#include<stdio.h>
void toggle(char * n);
int main()
{
  char n[99];
  int i;
  
  printf("enter the charcters:");
  scanf("%s",n);
  
  printf("before toggle:%s\n",n);
 
  toggle(n);
 
  printf("after toggle:%s",n);
 
  return 0;
}  


 void toggle(char * n)
{
 for(int i=0;n[i]!='\0';i++)
 {
  if(n[i]>='a' && n[i]<='z')
 {
    n[i]=n[i]-32;
 }
 else if(n[i]>='A' && n[i]<='Z');
 {
    n[i]=n[i]+32;
  }
}
  
 }









