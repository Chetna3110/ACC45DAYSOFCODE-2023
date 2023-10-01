#include <stdio.h>
int main () {
    int a,b,t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
    scanf("%d %d",&a,&b);
    if(b%a==0) {
        printf("%d\n",b/a-1);
  }
        else{
            printf("%d\n",b/a);
    }
    
}
     return 0;
}