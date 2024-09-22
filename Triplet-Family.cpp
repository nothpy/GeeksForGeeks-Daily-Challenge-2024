bool findTriplet(vector<int>& arr)
{
        for(int i=0; i<arr.size() - 1; i++)
        {
            for(int j =i+1; j<arr.size() ; j++)
            {
                int k =j+1;
                while(k<arr.size())
                {
                    if(arr[i]+arr[j] == arr[k])
                    {
                        return true;
                    }
                    else if(arr[i]+arr[k] == arr[j])
                    {
                        return true;
                    }
                    else if(arr[j]+arr[k] == arr[i])
                    {
                        return true;
                    }
                    else{
                        k++;
                    }
                }
            }
        }
