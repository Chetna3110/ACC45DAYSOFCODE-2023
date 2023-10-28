#include <stdio.h>

int main() {
	int t,n,k=0,d;
	scanf("%d",&t);
	
	while(k<t){
	  scanf("%d",&n);
	  if(n>=2){
	    d=((n-2)/7)+1;
	    printf("%d\n",d);
	  }
	  else{
	    printf("%d\n",0);
	  }
	  k++;
	}
	return 0;
}

