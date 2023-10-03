#include <stdio.h>
int main () {
	int T, n, m;
	scanf("%d", &T);
	while (T--) {
	    scanf("%d%d", &n, &m);
	    printf("%s\n", n%m==0 && (n/m)%2==0 ? "Yes" : "no");
	}
	return 0;
}
