#include<stdio.h>
int main(){
	int n,f;
	f=0;
	scanf("%d",&n);
	char c[n];
	scanf("%s",c);
	for(int i=0;i<n-1;i++){
		if(c[i]==c[i+1])
			f++;
	}
	printf("%d",f);
	return 0;
}
