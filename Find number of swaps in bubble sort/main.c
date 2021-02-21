#include <stdio.h>
/* Include other headers as needed */
int main()
{
    int t;
  scanf("%d",&t);
  while(t-->0)
  {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
      scanf("%d",&arr[i]);
    }
    int i, j, temp;
    int swaps = 0;
    for(i = 0; i < n-1; ++i) {
        for(j=0; j < n-1-i; ++j) {
            if(arr[j] > arr[j+1]) {
                temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
                swaps++;
            }
        }
    }
    printf("%d\n",swaps);
  }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
