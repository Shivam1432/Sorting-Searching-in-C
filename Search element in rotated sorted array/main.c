int searchRotatedSortedArray(int *a, int size, int target)
{
   for(int i=0; i<size; i++) {
    if(a[i]==target) return i;
  }
  return -1;
}
