class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {
        
        // boyer moore majority voting algorithms
        int count=0,element=0;
        for(int i=0;i<size;i++)
        {
            if(count==0)
            {
                element=a[i];
            }
            if(element==a[i])
            {
                count++;
            }
            else{
                count--;
            }
        }
        count=0;
        for(int i=0;i<size;i++)\
        {
            if(a[i]==element)
            {
                count++;
            }
        }
        if(count>(size/2))
        {
            return element;
        }
        else{
            return -1;
        }
        
    }
};
