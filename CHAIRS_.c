#include <stdio.h>
int main(void) {
    int t;
    scanf("%d",&t);
    while(t>0)
    {
        int a,b;
        
        scanf("%d%d",&a,&b);
        
        if(b>a){
            printf("0\n");
        }
        else{
            printf("%d\n",a-b);
        }
        t--;
    }
    return 0;
}