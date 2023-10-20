#include <stdio.h>

int main() {
  int t, x, y, seconds = 0, s;

  scanf("%d", &t);
  while (t--) {
    scanf("%d %d", &x, &y);
    (y > x) ? (s = 1) : (s = -1);
    while (x != y) {
    x += (2*s);
    y += s;
    seconds++;
    }
    printf("\n%d", seconds);
    seconds = 0;
    s = 0;
  }
  return 0;
}