// Your code goes hereclass Solution{

class Solution {
  public:
    void sortedMerge(vector<int>& arr1, vector<int>& arr2, vector<int>& res) 
    {
        int i =0 , j =0 , k = 0;
        sort(arr1.begin(), arr1.end());
        sort(arr2.begin(), arr2.end());
        while(i<arr1.size() && j<arr2.size())
        {
            if(arr1[i]<arr2[j])
            {
                res[k++]=arr1[i++];
            }
            else{
                res[k++]=arr2[j++];
            }
        }
        while(i<arr1.size())
        {
            res[k++] = arr1[i++];
        }
        while(j<arr2.size())
        {
            res[k++] = arr2[j++];
        }
    }
};
