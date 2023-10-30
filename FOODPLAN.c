#include <stdio.h>

int main() {
	int T;
	scanf("%d",&T);
	while(T--){
	    int N,M;
	    scanf("%d%d",&N,&M);
	     if(N==0){
	        printf("ONLINE/n");
	        return 0;
	    }
	    if((N*0.9)<M){
	        printf("ONLINE\n");
	    }else if((N*0.9)>M){
	        printf("DINING\n");
	    }else{
	        printf("EITHER\n");
	    }
	}
	return 0;
}

