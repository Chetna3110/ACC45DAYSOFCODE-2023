#include <stdio.h>
int main(void) {
	// your code goes here
	int t,a,b,c,d,r;
	scanf("%d",&t);
	while(t--) {
	    scanf("%d %d %d %d",&a,&b,&c,&d);
	    r=b-c;
	    printf("%d\n",a+r*d);
	}
	return 0;
}
