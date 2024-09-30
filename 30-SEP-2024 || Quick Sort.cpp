
class Solution
{
    public:
    //Function to sort an array using quick sort algorithm.
    void quickSort(int arr[], int low, int high)
    {
        if (low < high)
        {
        // Partition the array
            int pi = partition(arr, low, high);

        // Recursively sort the elements before and after partition
            quickSort(arr, low, pi - 1);
            quickSort(arr, pi + 1, high);
        }
    }
    
    public:
    int partition (int arr[], int low, int high)
    {
        int pivot = arr[high]; // Choosing the last element as the pivot
        int i = (low - 1); // Index of the smaller element

         for (int j = low; j <= high - 1; j++)
         {
        // If the current element is smaller than or equal to the pivot
             if (arr[j] <= pivot) 
             {
                 i++; // Increment the index of the smaller element
                 swap(arr[i], arr[j]);
             }
         }
    // Swap the pivot element with the element at i+1 position
        swap(arr[i + 1], arr[high]);
        return (i + 1); // Return the partition index
    }
};
