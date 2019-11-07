#include<stdio.h>
typedef struct Job
{
    char job_id[10];
    int profit;
    int deadline;
}job;
void calculate_sequence(job arr[],int n,int max_deadline)
{
    job temp;
    int total_profit = 0,i,k,min;
    int slot[n+1];
    int result[n+1];
    for(i=0;i<n;i++)
    {
        slot[i] = 0;
    }
    for(i=0;i<n;i++) //sort according to profit
    {
        for(k=0;k<n-i-1;k++)
        {
            if (arr[k].profit < arr[k+1].profit )
            {
                temp = arr[k+1];
                arr[k+1] = arr[k];
                arr[k] = temp;
            }
           
        }
    }
    for(i=0;i<n;i++)
    {
        min = (max_deadline > arr[i].deadline) ? arr[i].deadline : max_deadline;
        while (min >= 1)
        {
            if (slot[min] == 0)
            {
                result[min] = i;
                slot[min] = 1;
                break;
            }
            min--;
        }
    }
    printf("The sequence is:-> ");
    for(i=0;i<n;i++)
    {
        if (slot[i] == 1)
        {
            total_profit += arr[result[i]].profit;
            printf("%s  ",arr[result[i]].job_id);
        }
    }
    printf("\n Total profit is: %d",total_profit);
}
int main()
{
    int n, max_deadline,i;
    int dead[50];
    job j[50];
    printf("Enter the job number:-> ");
    scanf("%d",&n);
    printf("Enter the job id:->");
    for(i=0;i<n;i++)
    {
        scanf("%s",&j[i].job_id);
    }
    printf("Enter the Deadline of particular job:-> ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&j[i].deadline);
        dead[i] = j[i].deadline;
    }
    printf("Enter the Profit of particular job:-> ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&j[i].profit);
    }
    max_deadline = dead[0];
    for(i=1;i<n;i++)
    {
        if (max_deadline < dead[i])
        {
            max_deadline = dead[i];
        }  
    }
    calculate_sequence(j, n, max_deadline);  
}
