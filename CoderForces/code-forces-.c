#include<stdio.h>
int main()
{
    int n,l,r,k,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d %d %d",&n,&l,&r,&k);
        int a[n],f=0,temp;
        for(int i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = i+1; j < n; j++)
            {
                if(a[i] > a[j])
                {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }
        for(int i=0; i<n; i++)
        {
            if(a[i]<=r&&a[i]>=l&&k>=a[i])
            {
                f++;
                k=k-a[i];
            }
        }
        printf("%d\n",f);

    }
}
