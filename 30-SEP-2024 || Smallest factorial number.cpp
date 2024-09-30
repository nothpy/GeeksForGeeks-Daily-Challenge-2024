
class Solution
{
    public:
        // int factorial(int n)
        // {
        //     int k =5 ;
        //     int sum =0;
        //     while(k<n+1)
        //     {
        //         if(n/k <= 0)
        //         {
        //             return sum;
        //         }
        //         else {
        //             sum = sum+ n/k;
        //             k =k*k;
        //         }
        //     }
            
            
        // }
        // Function to count trailing zeros in factorial of n
        int findNum(int n)
        {
        //     int high = 5*n;
        //   for(int i = 1; i<high ; i++)
        //   {
        //       int count = factorial(i);
        //       if(count == n)
        //           return i;
        //   }
            
    //complete the function here
            if(n==0){
                return 0;
            }
            int start = 5, end = n*5;
            while(start<=end)
            {
                int mid = start+(end-start)/2;
                int cnt = 0;
                for(int i=5; mid/i>=1; i*=5){
                    cnt += (mid/i);
                }
                if(cnt >= n){
                    end = mid-1;
                }
                else{
                    start = mid+1;
                }
            }
            return start;
        }
};
