//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to count the number of possible triangles.
    int countTriangles(vector<int>& arr) {
        // code here
        int res =0;
        sort(arr.begin(),arr.end());
        int n = arr.size();
        for(int i=2;i<n;i++){
          int left =0, right =i-1;
          while(left<right){
              if(arr[left]+ arr[right]>arr[i]){
                  res += right - left;
                  right--;
              }
              else{
                  left++;
              }
          }
        }
        return res;
    }
};



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // To ignore the newline after the integer input
    while (t--) {
        int n;
        vector<int> a;
        string input;

        // Input format: first number n followed by the array elements
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            a.push_back(num);

        Solution obj;
        cout << obj.countTriangles(a) << "\n~\n";
    }

    return 0;
}

// } Driver Code Ends