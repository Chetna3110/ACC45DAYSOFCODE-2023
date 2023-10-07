#include <stdio.h>
int main() {
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        int a, b, c, d;
        scanf("%d %d %d %d", &a, &b, &c, &d);
        int x = (a > b) ? a : b;
        int y = (c > d) ? c : d;
        if (x < y) {
            printf("P\n");
        } else if (y < x) {
            printf("Q\n");
        } else {
            printf("TIE\n");
        }
    }
    return 0;
}

