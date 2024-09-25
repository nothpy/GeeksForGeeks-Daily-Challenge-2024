
class Solution {
  public:
    long long int minIncrements(vector<int> arr, int N)
    {
        sort(arr.begin(), arr.end());
        long long count = 0;
        for(long long i=1;i<N ;i++)
        {
            if(arr[i]<=arr[i-1])
            {
                long long val =arr[i-1]-arr[i]+1;
                count+=val;
                arr[i]+=val;
            }
        }
        return count;
    }
};
