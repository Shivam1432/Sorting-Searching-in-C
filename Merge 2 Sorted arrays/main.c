int * mergeArrays(int a[], int b[], int asize, int bsize) 
{
  static int arr[100];
  int i=0, j=0, k=0;
  while(i<asize && j<bsize) {
    if(a[i] < b[j]) arr[k++] = a[i++];
    else arr[k++] = b[j++];
  }
  while(i<asize) arr[k++] = a[i++];
  while(j<bsize) arr[k++] = b[j++];
  return arr;
}
