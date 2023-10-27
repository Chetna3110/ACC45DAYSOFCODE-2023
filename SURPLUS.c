#include <stdio.h>
int main() {
    int t,a1,a2,b1,b2,c;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d%d%d",&a1,&a2,&b1,&b2);
        c=(a2-a1)+(b2-b1);
        if(c<=0)
        {
            printf("no\n");
        }
        else if(c>0)
        {
            printf("yes\n");
        }
    }
    return 0;
}


