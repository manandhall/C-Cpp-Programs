#include <stdio.h>
int C(int n,int k)
{
    if(k==n||k==0)
    return 1;
    
    return C(n-1,k-1)+C(n-1,k);
}
int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    int x=C(n,k);
    printf("%d",x);
    return 0;
}
