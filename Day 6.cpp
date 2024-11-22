//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

 class Solution {
  public:
    int maximumProfit(vector<int> &prices) {
        int ans = 0;
        int n = prices.size();
        
        int mxi = INT_MIN, mni = INT_MAX;
        for (int i=0; i<n; i++){
            if (mni > prices[i]){
               mni = prices[i];
               if (mxi >= prices[i]) mxi = 0;
            }
            else{
                mxi = max(mxi, prices[i]);
            }
            
            if (mxi != INT_MIN && mni != INT_MAX){
                ans = max(mxi - mni, ans);
            }
        }
        
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> prices;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            prices.push_back(number);
        }

        Solution ob;
        int ans = ob.maximumProfit(prices);
        cout << ans << endl;
    }
    return 0;
}

// } Driver Code Ends
