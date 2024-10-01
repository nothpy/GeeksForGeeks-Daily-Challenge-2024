
    long long int inversionCount(vector<long long> &arr) {
        int inversion = 0;
        int i =0;
        // for(int i = 0; i<arr.size() ; i++)
        // {
        //     int j = i+1;
        //     while(j<arr.size())
        //     {
        //         if(arr[i]>arr[j] and i<j)
        //         {
        //             inversion++;
        //         }
        //     }
        // }
        while(i<arr.size()-1)
        {
            int j= i+1;
            while(j<arr.size())
            {
                if(arr[i]>arr[j] and i<j)
                {
                    inversion++;
                }
                j++;
            }
            i++;
        }
        return inversion;
    }
};
