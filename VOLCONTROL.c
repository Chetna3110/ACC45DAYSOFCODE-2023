#include <stdio.h>
int main() {
	int t,x,y,z;
	scanf("%d",&t);
	while(t--){
	    scanf("%d %d", &x,&y);
	    if(x>y){
       z=x-y;
   }
   else {
       z=y-x;
   }
   printf("%d\n",z);
}
	return 0;
}


