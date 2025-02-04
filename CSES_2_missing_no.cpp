#include <bits/stdc++.h>
using namespace std;
int main() {
    long long int n; 
    cin>>n;
    vector<int> arr(n-1);
    long long int sum=0;
    for(int i=0 ;i<n-1 ;i++){
        cin>>arr[i];
        sum += arr[i];
    }
    long long int totalSum=(n * (n+1))/2;
    long long int missingNo = totalSum - sum ;
    cout<<missingNo;
    return 0;
}