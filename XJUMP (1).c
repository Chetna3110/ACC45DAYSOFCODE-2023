#include <stdio.h>
int main () {
    int x,y,T;
    scanf("%d",&T);
    while (T--) {
        scanf("%d%d",&x,&y);
        int c=x/y;
        int d=x%y;
       printf("%d\n",c+d); 
        
    }
}
