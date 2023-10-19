#include <stdio.h>
int main() {
  int t;
  scanf("%d", &t);
  while (t--) {
    
    int people,maxage,age,count=0;
    scanf("%d %d",&people,&maxage);
    for(int i=0;i<people;i++) {
      scanf("%d",&age);
      if(age>=maxage)  {
        count++;
      }
    }
      printf("%d\n",count);
  }
  return 0;
}
