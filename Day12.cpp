//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // arr: input array
    // Function to find maximum circular subarray sum.
    int circularSubarraySum(vector<int> &arr) {

        // your code here
        int total = 0;
        int currMaxSum = 0, currMinSum = 0;
        int maxSum = arr[0],minSum = arr[0];
        for(int i=0;i<arr.size();i++){
            currMaxSum = max(currMaxSum + arr[i],arr[i]);
            maxSum = max(maxSum , currMaxSum);
            
            currMinSum = min(currMinSum+arr[i],arr[i]);
            minSum = min(minSum , currMinSum);
            
            total = total + arr[i];
            
        }
        int normal = maxSum;
        int circular = total - minSum;
        if(minSum == total)
        return normal;
        
        return max(normal , circular);
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;

        // Read first array
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        int res = ob.circularSubarraySum(arr);

        cout << res << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends