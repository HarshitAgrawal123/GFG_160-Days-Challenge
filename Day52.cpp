//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++
class Solution {
  public:
  
  int BinarySearch(vector<int> &arr,int complement){
      int L =0,h=arr.size()-1;
      int res = arr.size();
      while(L<=h){
          int mid = (L+h)/2;
          if(arr[mid]>=complement){
              res = mid;
              h = mid-1;
          }
          else{
              L = mid+1;
          }
      }
      return res;
  }
    int countPairs(vector<int> &arr, int target) {
        // Your code here
        int cnt =0;
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size();i++){
            int complement = target - arr[i];
            int ind = BinarySearch(arr,complement);
               cnt += ind;
               if(ind>i)
                 cnt-- ;
        }
         return cnt/2;
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
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int target;
        cin >> target;
        cin.ignore();
        Solution ob;
        int res = ob.countPairs(arr, target);
        cout << res << endl;
        cout << "~\n";
    }
    return 0;
}
// } Driver Code Ends