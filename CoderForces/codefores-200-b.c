#include<stdio.h>
int main()
{
    int n,sum;
    double a;
    scanf("%d",&n);
    int p[n];
    for(int i=0;i<n;i++){
        scanf("%d",&p[i]);
    }
    sum=0;
    for(int i=0;i<n;i++){
        sum=sum+p[i];
    }
    a=(double)sum/n;
    printf("%.12f",a);
    return 0;
}
