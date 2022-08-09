//T.C = O(N) S.C = O(1) //

int low = 0;
int high = n-1;
int mi = 0;
int ma = 0;
int ans = 0;
while(low<=high)
{
  if(arr[low]<arr[high])
  {
    if(arr[low]>mi)
    {
      mi = arr[low];
    }
    else
    {
      ans += (mi-arr[low]);
    }
    low++;
  }
  else
  {
    if(arr[high]>ma)
    {
      ma = arr[high];
    }
    else
    {
      ans += ma-arr[high];
    }
    hi--;
  }
}
//
