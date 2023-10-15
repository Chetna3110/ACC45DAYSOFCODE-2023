#include <stdio.h>
int main(void) {
     int t;
     scanf("%d",&t);
     while(t--){
         int x;
         scanf("%d",&x);
         if(x%3==0)
         printf("0\n");
         else
         {
             int w=x/3+1;
             int r=w*3;
             printf("%d\n",r-x);
         }
     }
	return 0;
}



