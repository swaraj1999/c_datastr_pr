#include<stdio.h>
#include<stdlib.h>
char str[50],pat[50],rep[50],c;
int i,j,k,m=0,flag=0;
int l1=0,l2=0;
int search();
void replace();
int main()
{
	int index;
	printf("enter the main string..");
	gets(str);
	printf("enter the pat string..");
	gets(pat);
//	printf("enter replace string..");
//	gets(rep);
	index=search();
	if(index==1)
	{
	 printf("do you want to replace the pattern string :Y/N\n");
		  scanf("%c",&c);
		  fflush(stdin);
		  if(c=='Y'||'y')
		  {
		  
		  replace();
		  
      	}
      }
		  else 
		  { printf("not possible");
		    exit(1);
		  }
	
	
}
int search()
{
	for(i=0;str[i]!='\0';i++)
	{   j=0;
	    m:
		if(str[i]==pat[j])
		{
			i++;
			j++;
			goto m;
		}
	 if(pat[j]=='\0')
		  {
		  flag=1;
		  break;}
		  }
		  
		  if(flag==1)
		  {
		  printf("\nthe pattern is present in the string\n");
		  return 1;
	      }
		else 
		  {
		  printf("the pattren string is not present in the string");
		  exit(0);}
		
	}
void replace()
{
	
	printf("enter the replace string..");
	gets(rep);
	for(i=0;str[i]!='\0';i++)
	{
		l1++;
	}
		for(j=0;pat[j]!='\0';j++)
	{
		l2++;
	}
	for(i=0;str[i+l2-1]!='\0';i++)
	{
		k=i;
		for(j=0;j<l2;j++)
		{
			if(str[k]!=pat[j])
			{
				break;
			}
			k++;
		}
		if(j==l2)
		{
		j=0;
		while(pat[j]!='\0'||rep[j]!='\0')	
		{
			str[i]=rep[j];
			i++;
			j++;
		}
		flag=1;
		}
		j=0;
	}
	printf("the string is %s",str);
}
	
	


