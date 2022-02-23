#include<stdio.h>
int main()
{
    char b[100],a[101];
    int i,f,t;
    scanf("%d",&t);
    while(t--){
    scanf("%s",b);
    a[0]=b[0];
    a[1]=b[1];
    printf("%c%c",a[0],a[1]);
    i=2;
    f=2;
    while(b[i]!='\0'){
        if(i%2!=0){
           a[f]=b[i];
           printf("%c",b[i]);
           f++;
        }
        i++;
    }
    printf("\n");
    }
    return 0;
}
