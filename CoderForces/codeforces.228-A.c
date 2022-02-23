#include<stdio.h>

int main(){
    int a[4],i,j,k=0;
	for(i=0;i<4;i++){
		scanf("%d",&a[i]);
		for(j=0;j<i;j++)
			if(a[j]==a[i]){
				k++;
				break;
				}
	}
	printf("%d",k);
	return 0;
}
