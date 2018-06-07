#include<stdio.h>
int main()
{
    int k,n,w,b,i,sum=0,e;
    scanf("%d %d %d",&k,&n,&w);
    for(i=1;i<=w;i++)
    {
        b=i*k;
        sum=sum+b;

    }
    e=sum-n;
    if(sum<n)
        e=0;

    printf("%d", e);

}
