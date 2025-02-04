#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin>>s;
    int maxFreq=0;
    int currFreq =1;
    for(int i=1 ; i< s.size() ; i++){
        if(s[i] == s[i-1]){
            currFreq++;
        }else{
            maxFreq=max(maxFreq,currFreq);
            currFreq=1;
        }
        
    }
    maxFreq=max(maxFreq,currFreq);
    cout<<maxFreq;
    return 0;
}
