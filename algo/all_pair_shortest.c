#include<stdio.h>
#define MAX 56783
int v,i,j;
void print(int dist[v][v])
{
    printf ("shortest distances between every pair of vertices \n");
    for (i = 0; i < v; i++)
    {
        for (j = 0; j < v; j++)
        {
            if (dist[i][j] == MAX)
                printf ("%7s","INF");
            else
                printf ("%7d", dist[i][j]);
        }
        printf("\n");
    }
}
void All_pair_shortest(int arr[v][v])
{ int k,j,i;   
    for(k=0;k<v;k++)
    {
        for(i=0;i<v;i++)
        {
            for(j=0;j<v;j++)
            {
                if(arr[i][k] + arr[k][j] < arr[i][j])
                {
                    arr[i][j] = arr[i][k] + arr[k][j];
                }
            }
        }
    }
    print(arr);
}
int main()
{
	int i,j;
    printf("Enter the no of vertices:-> ");
    scanf("%d",&v);
    int arr[v][v];
    char arr1[v][v];
    printf("Established the connection followed by Weight(For INFINITY Enter i):\n");
    for(i=0;i<v;i++)
    {
        for(j=0;j<v;j++)    // As coloumn should be at most 3, (source, destination, weight)
        {
            scanf("%d",&arr[i][j]);
            scanf("%c",&arr1[i][j]); //For infinity please enter i
            if(arr1[i][j] == 'i')
            {
                arr[i][j] = MAX;
            }
        }
    }
    All_pair_shortest(arr);
}
