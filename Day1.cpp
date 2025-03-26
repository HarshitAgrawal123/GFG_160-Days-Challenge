
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        int largest = arr[0];
        int second = -1;
        for(int i=1;i<arr.size();i++){
            if(arr[i]>largest){
                second = largest ;
                largest = arr[i];
            }
            else if (arr[i]>second && largest != arr[i]){
                second = arr[i];
            }
        }
        return second ;
    }
};
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
        Solution ob;
        int ans = ob.getSecondLargest(arr);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}