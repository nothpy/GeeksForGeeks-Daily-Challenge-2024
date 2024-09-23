// User function template for C++

class Solution{
  public:
    int MissingNumber(vector<int>& array, int n) {
        int sum=0,sum2=0;;
        for(int i=1;i<=n;i++)
        {
            sum=sum+i;
        }
        for(int i=0;i<n-1;i++)
        {
            sum2=sum2+array[i];
        }
        return sum-sum2;
    }
};
