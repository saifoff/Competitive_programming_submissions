#include<stdio.h>
int main()
{
    int k,n,w,sum,c;
    scanf("%d %d %d",&k,&n,&w);
    sum=0;
    for(int i=0;i<=w;i++){
        sum=sum+i;
    }
    //printf("%d",sum);
    c=(sum*k)-n;
    if(c<1){
        printf("0");
        exit(0);
    }
    printf("%d",c);
    return 0;
}
