#include <stdio.h>
int main() {
	 int t,a,b,c;
	 scanf("%d",&t);
	 while(t--){
	     scanf("%d %d %d",&a,&b,&c);
	     if (a+c>b){
	         printf("%d\n",a+c);
	     }
	     else{
	         printf("%d\n",b);
	     }
	 }
	return 0;
}


