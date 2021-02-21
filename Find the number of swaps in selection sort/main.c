#include <stdio.h>
#include <math.h>
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
    for (int i = 0; i < n-1; i++) 
        { 
            // Find the minimum element in unsorted array 
            int min_idx = i; 
            for (int j = i+1; j < n; j++) 
                if (arr[j] < arr[min_idx]) 
                    min_idx = j; 
  
            // Swap the found minimum element with the first 
            // element 
           if(min_idx!=i)
           {
             temp = arr[min_idx]; 
            arr[min_idx] = arr[i]; 
            arr[i] = temp; 
             swaps++;
           }
        } 
    printf("%d\n",swaps);
  }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
