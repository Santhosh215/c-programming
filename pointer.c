#include<stdio.h>
#include <stdlib.h>

char* getinput()
{
    int length = 25;
    int count = 0;
    char c;
    char *input;

    input = (char*)calloc(length, sizeof(char));

    if(input == NULL)
    {
        printf("Not allocating");
        exit(0);
    }

    while((c = getchar()) != '\n')
    {
        if(count >= length)
        {
        	input=realloc(input, ((length += 10) *sizeof(char)));
        }
        if (input[count]==9)
        {
          input[count] = '\0';
          return input;
        }
        input[count] = c;
        count++;
        
    }
    input[count] = '\0';

    return input;

}

int main()
{
	char * str;
        int len=0;

        printf("\nEnter the string\n");
        str=getinput();

	for(int i=0;str[i]!='\0';i++)
 	{
   		len++;
 	}

 	for(int i=1; i<=len/2;i++)
 	{
        	str[len]=str[i-1];
		str[i-1]=str[len-i];
		str[len-i]=str[len];
 	}
	str[len]='\0';


        printf("\n the revered string is: ");
        printf("\n%s",str);
        free(str);
        return 0;
}


