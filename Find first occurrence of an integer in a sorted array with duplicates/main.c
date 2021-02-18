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
    int index=-1, flag=1;
    for(int i=0; i<n; i++) {
      scanf("%d", &arr[i]);
      if(arr[i]==num && flag==1)  {
        index = i, flag=0;
      }
    }
    printf("%d\n", index);
  }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
