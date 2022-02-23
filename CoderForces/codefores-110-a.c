#include<stdio.h>
int main()
{
    char n[200];
    scanf("%s",n);
    int i,f,o;
    i=0;
    f=0;
    while(n[i]!='\0'){
        if(n[i]=='4'||n[i]=='7'){
            f++;
        }
        i++;
    }
    if(f==4||f==7){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}
