
#include<stdio.h>

struct Node
{
	int v1,v2,w;
};

 int Find(int i,int P[]);
 void Union(int i,int j,int P[]);
 
 
void swap(struct Node* a,struct Node* b)
{
	struct Node temp;
	
	temp=*a;
	*a=*b;
	*b=temp;
}
void Heapify(struct Node *cost,int i,int heap_size)
{
	int l=2*i+1;
	int r=2*i+2;
	
	int least;
	
	if(l<heap_size && cost[l].w<cost[i].w)
	 least=l;
	else
	  least=i;
	  
	  if(r<heap_size && cost[r].w<cost[least].w)
	   least=r;
	  
	  
	  if(i!=least)
	  {
	  	swap(&cost[i],&cost[least]);
	  	Heapify(cost,least,heap_size);
	  	
	  }
}
void BUILD_MIN_HEAP(struct Node *cost,int heap_size)
{
	int i;
	for(i=heap_size/2 -1;i>=0;i--)
	 Heapify(cost,i,heap_size);
}

int Adjust(struct Node *cost,int heap_size)
{
	swap(&cost[0],&cost[heap_size-1]);
	
	heap_size--;
	 Heapify(cost,0,heap_size);
	 
	 return heap_size;
}
 int kruskal_algo(int E,struct Node *cost,int N,int t[N-1][2])
 {
 	int heap_size=E;
 	
 	BUILD_MIN_HEAP(cost,heap_size);//build the min heap
 	
 	int Parent[N+1],i;//parent is the set to trace the root/parent of any vertex
 	
 	for(i=1;i<=N;i++)
 	 Parent[i]=-1;
 	 
 	int min_cost=0;
 	i=0;
 	
 	while(i<N-1 && heap_size>0)
 	{
 		struct Node M=cost[0];//extract the min weight edge from min heap
 		
 	heap_size=Adjust(cost,heap_size);//reheapify rest of the edges
 		
 		int j,k;
 		
 		j=Find(M.v1,Parent);
 		k=Find(M.v2,Parent);
 		
 		if(j!=k)
 		{
 			t[i][0]=M.v1;
 			t[i][1]=M.v2;
 			
 			min_cost+=M.w;
 			
 			i++;//edge increased
 			
 			Union(j,k,Parent);
		 }
		 
 		
	 }
 	return min_cost;
 }
 
 int Find(int i,int P[])
{
	while(P[i]>=0)
	 i=P[i];
	 
	 return i;//return the parent node number
}


void Union(int i,int j,int P[])
{
	
	if(P[i]<=P[j])//i is parent
	{
		P[i]+=P[j];
		P[j]=i;
	}
	else
	{
			P[j]+=P[i];//j is parent
		P[i]=j;
	}
}
int main()
{
	int N,E,i;
 printf("\nEnter number of vertices::");
  scanf("%d",&N);	
	
	printf("\nEnter number of edges::");
	 scanf("%d",&E);
	 
	 struct Node cost[E];
	 
	 printf("\nEnter the incident vertices and corresponding weight:: ");
	  for(i=0;i<E;i++)
	   {
	   	printf("\nv1=");
	   	 scanf("%d",&cost[i].v1);
	   	 printf("v2=");
	   	 scanf("%d",&cost[i].v2);
	   	 printf("w=");
	   	 scanf("%d",&cost[i].w);
	   	 
	   }
	   
	   int t[N-1][2];
	   
	   
	  int min_cost= kruskal_algo(E,cost,N,t);
	   
	   printf("\nMin cost=%d",min_cost);
	   
	   printf("\nEdges(in terms of incident vertices):");
	    for(i=0;i<N-1;i++)
	      printf("\n%d  %d",t[i][0],t[i][1]);
}
