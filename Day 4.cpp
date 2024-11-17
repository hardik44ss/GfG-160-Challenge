class Solution {
  public:

    void reverseArray(vector<int>& arr, int start, int end) {
        while (start < end) {
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
    }


    void rotateArr(vector<int>& arr, int d) {
        int n = arr.size();

       //If d>n we dont have to rotate the array
        d = d % n; 
        if (d == 0) return; 
    
        // Step 1: Reverse the first d elements
        reverseArray(arr, 0, d - 1);
    
        // Step 2: Reverse the remaining n-d elements
        reverseArray(arr, d, n - 1);
    
        // Step 3: Reverse the entire array
        reverseArray(arr, 0, n - 1);
    }
};
