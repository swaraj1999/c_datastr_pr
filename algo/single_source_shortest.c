#include<stdio.h>
void single_source_path(int arr[][3], int v, int e, int src)
{
    int weight[v];
    int i,j;
    for(i=0;i<v;i++)
    {
        weight[i] = __INT_MAX__;    // intialize weight[i] = INFINITY
    }
    weight[src] = 0;
    for(i=0;i< v-1; i++)
    {
        for(j=0;j<e;j++)
        {
            if ( weight[arr[j][0]] + arr[j][2] < weight[arr[j][1]]) //where arr[j][0] represent source and arr[j][2] represent length of graph
            {
                weight[arr[j][1]] =  weight[arr[j][0]] + arr[j][2];  //arr[j][1] represent the destination
            }
           
        }
    }
    for(i=0;i<e;i++) // check whether graph contains negative cycle or not
    {
        int x = arr[i][0]; // source vertex
        int y = arr[i][1]; //Destination vertex
        int w = arr[i][2];
        if(weight[x]!= __INT_MAX__ && weight[x]+w < weight[y])
        {
            printf("Graph contains negative weight cycle\n");
        }
    }
    printf("Vertex   Distance from source\n");
    for( i=0;i<v;i++)
    {
        printf("-----------------------------\n");
        printf(" %d\t\t%d\n",i,weight[i]);
    }
}
int main()
{
    int v,e,i,j;
    int arr[50][3];
    printf("Enter the no of vertices:-> ");
    scanf("%d",&v);
    printf("Enter the no of edges:-> ");
    scanf("%d",&e);
    printf("Established the connection followed by source->destination->weight:\n");
    for(i=0;i<e;i++)
    {
        for(j=0;j<3;j++)    // As coloumn should be at most 3, (source, destination, weight)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    single_source_path(arr,v,e,0);
}

