#include <stdio.h>
int main(void) {
  int t, c, x, y, ans;
  scanf("%d", &t);
  while (t--) {
    scanf("%d %d %d", &c, &x, &y);
    if (c < x)
      printf("\n0");
    else
      printf("\n%d", (c - x)*y);  
  }
  return 0;
}
