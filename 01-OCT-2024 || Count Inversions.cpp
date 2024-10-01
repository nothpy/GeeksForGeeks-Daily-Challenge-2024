
    long long int inversionCount(vector<long long> &arr) {
        int inversion = 0;
        int i =0;
        for(int i = 0; i<arr.size() ; i++)
        {
            int j = i+1;
            while(j<arr.size())
            {
                if(arr[i]>arr[j] and i<j)
                {
                    inversion++;
                }
            }
        }
        return inversion;
    }
};

// best solution 

class Solution {
  public:
  
    long long int merge(vector<long long> &arr, long long left, long long mid, long long right)
    {
        long long n1 = mid-left+1, n2 = right-mid;
        long long a[n1], b[n2];
        for(long long i =0; i<n1; i++)
        {
            a[i]= arr[left+i];
        }
        for(long long i =0; i<n2 ; i++)
        {
            b[i]= arr[mid+i+1];
        }
        long long i= 0,j=0, k=left , count =0;
        while(i<n1 and j<n2)
        {
            if(a[i]<= b[j])
            {
                arr[k++] = a[i++];
            }
            else{
                arr[k++] = b[j++];
                count += (n1-i);
            }
        }
        while(i<n1)
        {
            arr[k++] = a[i++];
        }
        while(j<n2)
        {
            arr[k++] = b[j++];
        }
        return count;
    }
  
    long long int mergeSort(vector<long long> &arr, long long left, long long right)
    {
        long long count = 0;
        if(left>=right) return count;
        long long mid =(left+right)/2;
        count += mergeSort(arr, left, mid);
        count += mergeSort(arr, mid+1, right);
        count += merge(arr, left, mid, right);
        return count;
    }
    long long int inversionCount(vector<long long> &arr)
    {

        return mergeSort(arr, 0 , arr.size()-1);
    }
};
