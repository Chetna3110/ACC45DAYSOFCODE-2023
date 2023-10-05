#include <stdio.h>
int main() {
  int t, a, b;
  scanf("%d", &t);

  while (t--) {
      scanf("%d %d", &a, &b);

      if (a >= b) {
        printf("\n%d", 7 - a);
      }
      else {
        printf("\n%d", 7 - b);
      }
  }
}

