#include <stdio.h>
int main() {
	int t ;
	scanf("%d",&t);
	for(int i=1;i<=t;i++){
	    float n,m;
	    scanf("%f%f",&n,&m);
	    float k=(n-n/10);
	    if(k<m){
	        printf("online\n");
	    }
	   else if(k>m){
	        printf("dining\n");
	    }
	    else{
	        printf("either\n");
	    }
	}
	return 0;
}