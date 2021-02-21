float medianArrays(int a[], int b[], int asize, int bsize) 
{
  int k=0, i=0, j=0, n=asize+bsize;
  int arr[n];
  while(i<asize && j<bsize) {
    if(a[i]<=b[j]) arr[k++] = a[i++];
    else arr[k++] = b[j++];
  }
  while(i<asize) arr[k++] = a[i++];
  while(j<bsize) arr[k++] = b[j++];
  float m;
  if(n%2==0) m = ((float)(arr[n/2] + arr[(n/2)-1]))/2;
  else m = arr[n/2];
  return m;
}
