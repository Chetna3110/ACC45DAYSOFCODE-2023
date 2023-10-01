#include <stdio.h>
int main() {
    int t;
    scanf("%d",&t);
    while(t--) {
        int x,y;
        scanf("%d %d", &x,&y);
        if(x<y) {
            printf("0\n");
              } else {
                  printf("%d\n",x/y);
        }
    }
    return 0;
}