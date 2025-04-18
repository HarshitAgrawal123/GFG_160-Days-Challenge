//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++
class Solution {
  public:
    string addBinary(string& s1, string& s2) {
        // your code here
        string result ;
        int i = s1.length()-1 ,j = s2.length()-1;
        int carry =0;
        while(i>= 0 || j>=0 || carry){
            int sum = carry ;
            if(i>=0)sum += s1[i--] - '0';
            if(j>=0)sum += s2[j--] - '0';
            
            result.push_back((sum %2)+ '0');
            carry = sum/2;
        }
        while(result.size()>1 && result.back() == '0'){
            result.pop_back();
        }
        reverse(result.begin(),result.end());
        if(result.empty())return "0";
        return result;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string A, B;
        cin >> A >> B;
        Solution ob;
        cout << ob.addBinary(A, B);
        cout << "\n";

        cout << "~"
             << "\n";
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends