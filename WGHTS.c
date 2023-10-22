#include <stdio.h>
int main() {
	int w,a,b,c,t;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d%d%d%d",&w,&a,&b,&c);
	    if(w==a||w==b||w==c||w==a+b||w==a+c||w==b+c||w==a+b+c)
	    printf("yes\n");
	    else
	    printf("no\n");
	}
	return 0;
}


