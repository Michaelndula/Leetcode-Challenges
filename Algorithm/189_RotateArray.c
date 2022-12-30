/*
    Given an array, rotate the array to the right by k steps, where k is non-negative.
*/

void reverse(int* arr, int start, int end){
    for(; start < end; start++, end--){
        int tmp = arr[start];
        arr[start] = arr[end];
        arr[end] = tmp;
    }
}

void rotate(int* nums, int numsSize, int k){
   
   if(numsSize == 1)
   return;
   k %= numsSize;

   reverse(nums, 0, numsSize-1);
   reverse(nums, 0, k-1);
   reverse(nums, k, numsSize - 1);

}

// Function to print elements of array
void PrintTheArray(int arr[], int n)
{
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}

// Driver code
int main()
{
    int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
    int numsSize = sizeof(arr) / sizeof(arr[0]);
    int k = 2;
 
    // Function calling
    Rotate(arr, k, numsSize);
    PrintTheArray(arr, numsSize);
 
    return 0;
}

/*
    Example 1:

        Input: nums = [1,2,3,4,5,6,7], k = 3
        Output: [5,6,7,1,2,3,4]
        Explanation:
        rotate 1 steps to the right: [7,1,2,3,4,5,6]
        rotate 2 steps to the right: [6,7,1,2,3,4,5]
        rotate 3 steps to the right: [5,6,7,1,2,3,4]
*/