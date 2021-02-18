#include <stdio.h>
/* Include other headers as needed */
int main()
{
  int t;
  scanf("%d", &t);
  while(t-->0) {
    int n, num;
    scanf("%d %d", &n, &num);
    int arr[n];
    int count=0;
    for(int i=0; i<n; i++) {
      scanf("%d", &arr[i]);
      if(arr[i]==num) ++count;
    }
    printf("%d\n", count);
  }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
