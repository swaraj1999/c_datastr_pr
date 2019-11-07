#include <stdio.h>
int Adj[50][50],color[50];
void next_color(int k)
{
	int i;
    color[k] = 1;
    for(i=0;i<k;i++)
    {
        if(Adj[i][k]!=0 && color[k] == color[i])
        {
            color[k] = color[i] + 1;
        }
    }
}
int main(){
  int v,e,i,j,k,l;
  printf("Enter no of vertices: ");
  scanf("%d",&v); 
  printf("Enter no of edges: ");
  scanf("%d",&e);  
  for(i=0;i<v;i++)
  {
    for(j=0;j<v;j++)
    {
        Adj[i][j]=0;
    }
  }  
  printf("Established the Graph connection-->\n");
  for(i=0;i<e;i++){
    scanf("%d %d",&k,&l);
    Adj[k][l]=1;
    Adj[l][k]=1;
  }
  for(i=0;i<v;i++)
  {
      next_color(i);
  } 
  printf("Colors of vertices -->\n");
  for(i=0;i<v;i++) 
    printf("Vertex[%d] : %d\n",i+1,color[i]);
  return 0;
}
