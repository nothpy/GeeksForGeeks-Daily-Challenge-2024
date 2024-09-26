
class Solution
{
  public:
    int findIndex(vector<int> &arr)
    {
        for(int i=0 ; i<arr.size(); i++)
        {
            if(arr[i]>0)
            {
                return i;
            }
        }
    }
    // Function to find the smallest positive number missing from the array.
    int missingNumber(vector<int> &arr)
    {
        sort(arr.begin(), arr.end());
        int index = findIndex(arr);
        int missing = 1;
        for(int i = index; i<arr.size()+1; i++)
        {
            if(arr[i] == missing )
            {
                missing++;
            }
            else{
                return missing;
            }
        }
    }
};
