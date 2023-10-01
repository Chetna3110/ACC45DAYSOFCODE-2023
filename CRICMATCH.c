#include <stdio.h>
int main() {
	int t,n,m;
	scanf("%d",&t);
	while(t--){
	    scanf("%d%d",&n,&m);
	    if(n<=m*36){
	        printf("yes\n");
	    }
	    else{
	        printf("no\n");
	    }
	}
	return 0;
}

