#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n;
	int a,b;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d %d",&a,&b);
		a=abs(a-b);
			printf("%d\n",a/10+(a%10!=0));
	}

	return 0;
}
