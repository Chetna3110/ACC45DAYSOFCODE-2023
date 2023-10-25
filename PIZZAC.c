#include <stdio.h>
int main() {
	int t;
	scanf("%d",&t);
	for(int i;i<t;i++){
	    int x;
	    scanf("%d",&x);
	    if(x==1 || x%2==0){
	        printf("YES \n");
	    }
	    else{
	        printf("NO \n");
	    }
	}
	return 0;
}

