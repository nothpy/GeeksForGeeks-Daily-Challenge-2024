// ******** Given an array A of integers and another number K. Find all the unique quadruple from the given array that sums up to K. Also note that all the quadruples which you return should be internally sorted, ie for any quadruple [q1, q2, q3, q4] the following should follow: q1 <= q2 <= q3 <= q4. ********

// <======== Example ========>
// Input: N = 5, K = 3, A[] = {0,0,2,1,1}
// Output: 0 0 1 2

// Input: N = 7, K = 23, A[] = {10,2,3,4,5,7,8}
// Output: 2 3 8 10 2 4 7 10 3 5 7 8 


// Expected Time Complexity ==> O(N^3)
// Expected Auxiliary Space ==> O(N^2)




class Solution{
    public:
    vector<vector<int> > fourSum(vector<int> &arr, int k) {
        int n = arr.size();
        vector<vector<int>> ans;
        sort(arr.begin(), arr.end());
        
        for(int i = 0; i < n-3; i++) {
            if(i>0 && arr[i] == arr[i-1]) {
                continue;
            }
            
            for(int j = i+1; j < n-2; j++) {
                if(j>i+1 && arr[j] == arr[j-1]) {
                    continue;
                }
                
                int start = j + 1;
                int end = n - 1;
                while(start < end) {
                    if(arr[i]+arr[j]+arr[start]+arr[end] == k) {
                        ans.push_back({arr[i], arr[j], arr[start], arr[end]});
                        start++;
                        end--;
                
                        while(start < end && arr[start] == arr[start-1]) {
                            start++;
                        }
                        
                        while(start < end && arr[end] == arr[end+1]) {
                            end--;
                        }
                    }
                    else if(arr[i]+arr[j]+arr[start]+arr[end] > k) {
                        end--;
                    }
                    else {
                        start++;
                    }
                }
            }
        }
        
        return ans;
    }
};
