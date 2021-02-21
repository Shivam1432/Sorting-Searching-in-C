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
    int a[n];
    for(int i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
    int value,j,count=0;
     for(int i=1;i<n;i++)
    {
        value=a[i];
        j=i-1;
        // shifting 
        while(j>=0 && a[j]>value)
        {
            // 
            a[j+1]=a[j];
            j=j-1;
            count++;
        }
       if(a[j+1]!=value)
       {
        a[j+1]=value;
        count++;
       }
    }
    printf("%d\n",count);
  }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
