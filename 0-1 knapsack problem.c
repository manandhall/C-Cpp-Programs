#include <stdio.h>
int max(int a,int b)
{
    if(a>b)
    return a;
    else
    return b;
}
int knapsack(int n,int W,int wt[],int val[])
{
    if(n==0||W==0)
    return 0;
    if(wt[n-1]>W)
    {
        return knapsack(n-1,W,wt,val);
    }
    else
    {
        return max(val[n-1]+knapsack(n-1,W-wt[n-1],wt,val),knapsack(n-1,W,wt,val));
    }
}
int main()
{
    int n,W;
    scanf("%d%d",&n,&W);
    int val[n],wt[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&val[i]);
    }
    for(int i=0;i<n;i++)
    {
        scanf("%d",&wt[i]);
    }
    int x=knapsack(n,W,wt,val);
    printf("%d",x);
    return 0;
}