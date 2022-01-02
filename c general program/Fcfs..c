#include<stdio.h>
#define max 30
int main(int argc, char const *argv[])
{
    int i,n,j,bt[max],wt[max],tat[max];
    float awt=0,att=0;
    printf("Enter the number of process:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&bt[i]);
    }
    printf("Process\t burst time\t waiting time\t turn around time\n");
    for(i=0;i<n;i++)
    {
        wt[i]=0;
        tat[i]=0;
        for(j=0;j<i;j++)
        {
           wt[i]=wt[i]+bt[j];
        }
        tat[i]=wt[i]+bt[i];
        awt=awt+wt[i];
        att=att+tat[i];
        printf("%d\t%d\t\t%d\t\t\t%d",i+1,bt[i],wt[i],tat[i]);
    }
    printf("average wating time=%f",awt/n);
    printf("average turnaround time = %f",att/n);
    return 0;
}
