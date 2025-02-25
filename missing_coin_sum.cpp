#include <bits/stdc++.h>
using namespace std;
int main() {
    long  n; cin>>n;
    vector<int> arr(n);
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }
    sort(arr.begin() , arr.end());
    long int sum = 1; 
    for(int i=0 ; i<n ; i++){
        if(arr[i] > sum) break;
        sum += arr[i];
    }
    cout<<sum;
    return 0;
}
