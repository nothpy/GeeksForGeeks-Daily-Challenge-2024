
class Solution
{
    public:
    void merge(int arr[], int l, int m, int r)
    {
        int n1 = m - l + 1;
        int n2 = r - m;

    // Create temporary arrays
        int L[n1], R[n2];

    // Copy data to temp arrays L[] and R[]
        for (int i = 0; i < n1; i++)
            L[i] = arr[l + i];
        for (int j = 0; j < n2; j++)
            R[j] = arr[m + 1 + j];

    // Merge the temp arrays back into arr[l..r]
        int i = 0, j = 0, k = l;
        while (i < n1 && j < n2)
        {
            if (L[i] <= R[j]) 
            {
                arr[k] = L[i];
                i++;
            } 
            else 
            {
                arr[k] = R[j];
                j++;
            }
            k++;
       }

    // Copy the remaining elements of L[], if any
        while (i < n1)
        {
            arr[k] = L[i];
            i++;
            k++;
        }

    // Copy the remaining elements of R[], if any
        while (j < n2)
        {
            arr[k] = R[j];
            j++;
            k++;
        }
    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
        if (l < r)
        {
            int m = l + (r - l) / 2;

        // Sort first and second halves
            mergeSort(arr, l, m);
            mergeSort(arr, m + 1, r);

        // Merge the sorted halves
            merge(arr, l, m, r);
        }
    }
};
