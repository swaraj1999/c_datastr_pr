#include<stdio.h>
#include<math.h>
 
int board[20],count;

void queen(int ,int );
int place(int ,int );
void display();

void main()
{
	int n,i,j;
	 
	printf(" -----N QUEENS PROBLEM USING BACKTRACKING -----");
	printf("\n\nEnter number of Queens: ");
	scanf("%d",&n);
	
	queen(1,n);
	printf("\nTotal solutions=%d",count);
}


//function to check for proper positioning of queen
void queen(int row,int n)
{
 	int column;
 	for(column=1; column<=n; column++)
	{
	    if(place(row,column))
	    {
		    board[row]=column;  //no conflicts so place queen
		    if(row==n)          //dead end
		        display(n);     //printing the board configuration
		    else                //try queen with next position
		        queen(row+1,n);
	    }
	}
}


/*Funtion to check conflicts
If no conflict for desired postion returns 1 otherwise returns 0*/
int place(int row,int column)
{
    int i;
    for(i=1;i<=row-1;++i)		//checking column and digonal conflicts
    {
        if((board[i]==column) || (abs(board[i]-column)==abs(i-row)))
    	return 0;
	}
		return 1;           //no conflicts
}


//function for printing the solution
void display(int n)
{
	int i,j;
	count++;
	printf("\n\nSolution: %d\n",count);
	for (i=1;i<=n;i++)
	{
		for (j=1;j<=n;j++) 
		{
			if(board[i]==j)
			    printf("Q\t"); 
			else
			    printf("*\t");
		}
		printf("\n");
	}
	
	for (i=1;i<=n;i++)
	{
		for (j=1;j<=n;j++) 
		{
			if(board[i]==j)
			printf("%d ",j);
		}
	}
}
