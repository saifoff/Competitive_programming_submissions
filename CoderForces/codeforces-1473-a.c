#include<stdio.h>
int main()
{
    int t,n,i,first,second;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&n,&i);
        int a[n];
        for(int j=0;j<n;j++){
            scanf("%d",&a[j]);
        }
        int f;
        for(int j=0;j<n;j++){
           f=0;
           if(i==a[j]||i>a[j]){
            f=1;
           }
           else{
            break;
           }
        }
        if(f==1){
            printf("Yes\n");
            continue;
        }
        first=a[0];
        second=a[0];
        for(int j=0;j<n;j++){
            if(second<a[j]){
                second=a[j];
            }
        }
       for(int j=0;j<n;j++){
        if(a[j]<first){
            second=first;
            first=a[j];
        }
        else if(a[j]<second){
            second=a[j];
        }
       }
      if(i>=(first+second)){
        printf("Yes\n");
       }
       else{
        printf("No\n");
       }
    }
    return 0;
}
