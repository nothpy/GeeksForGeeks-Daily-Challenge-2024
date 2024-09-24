class Solution {
  public:
    // int minimum(vector<int> &arr) {
    //     int min = INT_MAX;  // Initialize min to a very high value.
    //     for(int i = 0; i < arr.size(); i++) {
    //         if(arr[i] > 0 && arr[i] < min) { // Consider only positive values.
    //             min = arr[i];
    //         }
    //     }
    //     return min;
    // }
    
    // int countGreaterZero(const vector<int>& arr) {
    //     int count = 0;
    //     for(int i = 0; i < arr.size(); i++) {
    //         if(arr[i] > 0) count++;
    //     }
    //     return count;
    // }
    
    vector<int> RopeCutting(vector<int>& arr) {
        //  vector<int> res;
        
        // while(true) 
        // {
        
        //     int minLen = minimum(arr);  // Get the smallest length.
            
        //     for(int i = 0; i < arr.size(); i++)
        //     {
        //         if(arr[i] > 0) {
        //             arr[i] -= minLen;  // Reduce length of each rope by minLen.
        //         }
        //     }
        //     int count = countGreaterZero(arr);  // Count ropes with length > 0.
        //     if(count == 0) break;  // If no ropes left, exit the loop.
        //     res.push_back(count);  // Store the count before performing the cut.
     
        // }
        
        // return res;
        
        // EFFICIET SOLUTION 
        // Step 1: Sort the array
        sort(arr.begin(), arr.end());
        vector<int> res;
        int n = arr.size();
        
        // Step 2: Track the number of remaining ropes after each cut
        for (int i = 0; i < n; i++) {
            // Only consider cutting if we encounter a new length greater than the previous one
            if (i == 0 || arr[i] != arr[i - 1]) {
                // The number of ropes left after the cut operation
                if(i>0)
                res.push_back(n - i);
            }
        }
        
        return res;
    }
};
