#include<stdio.h>
int main()
{
    int a[4],max;
    for(int i=0;i<4;i++){
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(int i=0;i<4;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    for(int i=0;i<4;i++){
        a[i]=max-a[i];
    }
    for(int i=0;i<4;i++){
        if(a[i]!=0){
            printf("%d ",a[i]);
        }
    }
    return 0;
}
