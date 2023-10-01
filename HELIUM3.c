#include <stdio.h>
int main() {
    int A,B,X,Y,a,T;
    scanf("%d",&T);
    while(T--) {
       scanf("%d %d %d %d" ,&A ,&B, &X, &Y) ;
       a=(X*Y)/A;
       if(B<=a)
       printf("yes\n");
       else
       printf("no\n");
    }
    return 0;
}