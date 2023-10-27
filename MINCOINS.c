#include <stdio.h>
int main(){
int t;
scanf("%d",&t);
while(t--){
    int x;
    scanf("%d",&x);
    if(x%10==0)
    {
        printf("%d\n",x/10);
        }
   else if(x%10!=0)
   {
       if(x%5==0)
       {
           printf("%d\n",(x/10)+(x%10)/5);
       }
        else
        {
             printf("-1\n");
        }
   }
   
}
	return 0;
}



