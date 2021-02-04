#include<stdio.h>
int main()
{
    unsigned int n,m,x=0;
    unsigned long t;
    char s,ans;
    scanf("%u %u %lu",&n,&m,&t);
    scanf(" %c",&s);
    if(s=='L')
    {
        for (int i=1;i<t;i++)
        {
            x=x+n;
            if(x>=t)
            {
                ans='L';
                break;
            }
            x=x+m;
            if(x>=t)
            {
                ans='R';
                break;
            }
        }
    }
    else if(s=='R')
    {
        for (int i=1;i<t;i++)
        {
            x=x+m;
            if(x>=t)
            {
                ans='R';
                break;
            }
            x=x+n;
            if(x>=t)
            {
                ans='L';
                break;
            }
        }
    }
    printf("%c",ans);

    return 0;
}
