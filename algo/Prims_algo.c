
#include<stdio.h>
#define INT_MAX 64000

void Prims(int N,int Adj[N][N],int T[N][2])
{
	int X[N],i,j;
	
	for(i=0;i<N;i++)
	 X[i]=0;
	 
	 int n=1,x,y;
	 
	 X[0]=1;
	 while(n<N)
	 {
	 	int min=INT_MAX;
	 	for(i=0;i<N;i++)
	 	{
	 		if(X[i]==1)
	 		{
	 			for(j=0;j<N;j++)
	 			{
	 				if(X[j]==0)
	 				{
	 					if(min>Adj[i][j])
	 					{
	 						min=Adj[i][j];
	 						x=i;
	 						y=j;
						 }
					 }
				 }
			 }
		 }
		 T[n-1][0]=x+1;
		 T[n-1][1]=y+1;
	//	 printf("%d %d %d %d\n",x+1,y+1,T[n-1][0],T[n-1][1]);
		 n++;
		 X[y]=1;
	 }
}
int main()
{
		int V,E,i,j;
 printf("\nEnter number of vertices::");
  scanf("%d",&V);	
	
	printf("\nEnter number of edges::");
	 scanf("%d",&E);
	 
	// struct Node cost[E];
	int Adj[V][V];
	 
	 for(i=0;i<V;i++)
	  for(j=0;j<V;j++)
	   Adj[i][j]=INT_MAX;
	   
	 printf("\nEnter the incident vertices and corresponding weight:: ");
	 
	 int v1,v2;
	  for(i=0;i<E;i++)
	   {
	   	printf("\nv1=");
	   	 	scanf("%d",&v1);
	   	 	
	   	printf("v2=");
	   	 	scanf("%d",&v2);
	   	 	
	   	printf("w=");
	   	 	scanf("%d",&Adj[v1-1][v2-1]);
	   	 	
	   	 Adj[v2-1][v1-1] = Adj[v1-1][v2-1];
	   	 
	   } 
	   int T[V-1][2];
	   
	   Prims(V,Adj,T);
	   
	   for(i=0;i<V-1;i++)
	    printf("%d %d\n",T[i][0],T[i][1]);
	   	   
}
