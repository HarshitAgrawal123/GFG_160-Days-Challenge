//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int maximumProfit(vector<int> &prices) {
        if(prices.empty()) return 0;
        int min = prices[0];
        int max = 0;
        for(int i=1;i<prices.size();i++){
            if(prices[i]<min){
                min = prices[i];
            }
            else{
                int current = prices[i]-min;
                if(current>max){
                    max = current;
                }
            }
        }
       return max;
        
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