#include<stdio.h>
int main()
{
    long long int n,e,o,c;
    scanf("%lld",&n);
    e=0;
    o=0;
    /*for(int i=1;i<=n;i++){
        if(i%2==0){
            e=e+i;
        }
        else{
            o=o+i;
        }
    }*/
    if(n%2==0){
        c=n/2;
        e=(c*c)+c;
        o=c*c;
    }
    else{
        c=n/2;
        e=(c*c)+c;
        c=(n/2)+1;
        o=c*c;
    }
    printf("%lld",e-o);
    return 0;
}
