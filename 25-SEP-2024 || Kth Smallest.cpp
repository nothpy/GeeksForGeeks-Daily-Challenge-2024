// this code do time limit exceedd this is not efficient solution
class Solution {
  public:
    int minimum(vector<int> &arr )
    {
        int min = INT_MAX;
        int index;
        for(int i = 0; i<arr.size(); i++)
        {
          
            if(arr[i]<min)
            {
                min = arr[i];
                index = i;
            }
        }
        return index;
        
    }
    int kthSmallest(vector<int> &arr, int k) 
    {
        for(int i =1 ; i<=k; i++)
        {
            int index = minimum(arr);
            if(i==k){
                return arr[index];
            }
            arr[index] = INT_MAX;
        }
    }
};
// Efficient solution  
