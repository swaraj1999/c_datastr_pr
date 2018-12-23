#include<stdio.h>
#include<stdbool.h>
#include<math.h>

int x[100],a=1;

bool place(int k,int i)
{
	int j;
	for(j=1;j<=k-1;j++)
	{
		if(x[j] == i || abs(x[j] - i) == abs(k-j))
		{
			return false;
		}
	}
	return true;
}

void print(int n)
{
	int i;
	printf("\n\n combition  %d -- ",a++);
	for(i=1; i<=n; i++)
	{
		printf("%d  ",x[i]);
	}
}

void NQueen(int k,int n)
{
	int i;
	for(i=1 ; i<=n ; i++)
	{
		if(place(k,i))
		{
			x[k] = i;
			if(k == n)
			{
				print(n);
			}
			else
			{
				NQueen(k+1,n);
			}
		}
		
	}
}



int main()
{
	int n;
	printf("\nEnter diamension -- ");
	scanf("%d",&n);
	NQueen(1,n);
}
