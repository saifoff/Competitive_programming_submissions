#include<stdio.h>
#include<string.h>
#include<math.h>

int main() {
    int mat[5][5],m,n;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            scanf("%d",&mat[i][j]);
            if(mat[i][j]==1){
                m=i;
                n=j;
            }
        }
    }
    m=abs(m-2);
    n=abs(n-2);
    printf("%d",m+n);
    return 0;
}
