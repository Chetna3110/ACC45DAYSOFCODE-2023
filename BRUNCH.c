#include <stdio.h>

int main() {
	int t;
    scanf("%d", &t);
	while(t--)
	{
	    int a, b;
	    scanf("%d", &a);
	    scanf("%d", &b);
	    int ans = a/b;
	    if(ans >= 20)
	        printf("20\n");
	    else
	        printf("%d\n", ans);
	}
	return 0;
}


