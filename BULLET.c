#include <stdio.h>
int main() {
	int T, X, Y, Z, c;
	scanf("%d", &T);
	while(T--){
	    scanf("%d %d %d", &X, &Y, &Z);
	    c= Y/X;
	    if(c<=Z){
	        printf("%d\n", (Z-c));
	    }
	    else{
	        printf("%d\n",0);
	    }
	}
	return 0;
}

