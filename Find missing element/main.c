#include <stdio.h>
/* Include other headers as needed */
int main()
{
  int t;
  scanf("%d", &t);
  while(t-->0) {
    int m, n;
    scanf("%d %d", &m, &n);
    int a1[m], a2[n];
    for(int i=0; i<m; i++) scanf("%d", &a1[i]);
    for(int i=0; i<n; i++) scanf("%d", &a2[i]);
    for(int i=0; i<m; i++) {
      int res = search(a2, n, a1[i]);
      if(res==-1) {
        printf("%d\n", a1[i]);
        break;
      }
    }
  }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}

int search(int a[], int n, int x) {
  for(int i=0; i<n; i++) {
    if(a[i]==x) return 1;
  }
  return -1;
}
