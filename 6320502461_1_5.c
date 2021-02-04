#include<stdio.h>
int main()
{
    int n,max,pos;
    scanf("%d",&n);
    int n1[n];
    for (int i=0;i<n;i++)
    {
        scanf("%d",&n1[i]);

    }
    max=n1[0];
    for (int i=0;i<n;i++)
    {
        if(n1[i]>=max)
        {
            max=n1[i];
            pos=i;
        }

    }
    for (int i=0;i<n;i++)
    {
        if(n1[pos]==n1[i])
        {
            pos=i;
            break;
        }
    }

    printf("%d %d",pos+1,n1[pos]);

    return 0;
}
