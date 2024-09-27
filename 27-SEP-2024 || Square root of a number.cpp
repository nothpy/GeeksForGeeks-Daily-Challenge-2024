
class Solution {
  public:
    long long int floorSqrt(long long int n) 
    {
    
        if (n == 0 || n == 1)
          return n;
        long long ans;
        long long int start =1, end = n;
        while(start<=end)
        {
            long long int mid = (start+end)/2;
            if(mid*mid<=n)
            {
                ans = mid;
                start = mid+1;
            }
            else{
                end = mid-1;
            }
        }
        return ans;
    }
};
