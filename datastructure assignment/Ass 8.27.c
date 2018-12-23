#include<stdio.h>
void tower(int,char,char,char);
 
void main()
{
    int n;
    printf("Enter the number of disks = ");
    scanf("%d",&n);
    printf("The ways are =\n");
    tower(n,'A','B','C');
    
}
 
void tower(int N,char org,char inter,char des)
{
    if(N>0)
    {
        tower(N-1,org,des,inter);
        printf("\n%c -> %c",org,des);
        tower(N-1,inter,org,des);
    }
}
