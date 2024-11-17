class Solution {
  public:
    // Function returns the second largest elements

    int getSecondLargest(vector<int> &arr) {
        // Using a set to handle duplicates
        set<int> uniqueElements(arr.begin(), arr.end());

        // If there are less than 2 unique elements, return -1
        if (uniqueElements.size() < 2) {
            return -1;
        }

        // Priority queue (min-heap) to find the top two largest unique elements
        priority_queue<int, vector<int>, greater<int>> minHeap;

        for (int num : uniqueElements) {
            minHeap.push(num);
            // Maintain the size of the heap as 2
            if (minHeap.size() > 2) {
                minHeap.pop();
            }
        }

       
        return minHeap.top();
    }
};
