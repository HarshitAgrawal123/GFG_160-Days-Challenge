//{ Driver Code Starts
// Initial function template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
  bool isPossible(vector<int>& arr , int k , int mid){
      int students = 1;
      int currentSum = 0;
       for(int i = 0;i<arr.size();i++){
           if(arr[i]>mid){
               return false ;
           }
           if(currentSum + arr[i]>mid){
               students++;
               currentSum = arr[i];
                if(students>k){
                    return false ;
                }
           }
                else{
                    currentSum += arr[i];
                }
           }
         return true ;  
  }
    int findPages(vector<int> &arr, int k) {
        // code here
        if(arr.size()<k){
            return -1 ;
        }
        int left = *max_element(arr.begin(),arr.end());
        int right = accumulate(arr.begin(),arr.end(),0);
        int result = INT_MAX;
        
        while(left <= right){
            int mid = left + (right-left)/2;
            
            if(isPossible(arr,k,mid)){
                result = min(result,mid);
                right = mid - 1;
            }
            else{
                left = mid+1;
            }
        }
        return result;
    }
};


//{ Driver Code Starts.

int main() {
    int test_case;
    cin >> test_case;
    cin.ignore();
    while (test_case--) {

        int d;
        vector<int> arr, brr, crr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        getline(cin, input);
        ss.clear();
        ss.str(input);
        while (ss >> number) {
            crr.push_back(number);
        }
        d = crr[0];
        int n = arr.size();
        Solution ob;
        int ans = ob.findPages(arr, d);
        cout << ans << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends