#include<bits/stdc++.h>
using namespace std;

int main(){

    set<int> s;
    int n;
    cin>>n;
    int socks[2*n];
    set<int> maxVal;
    
    
    for(int i =0;i< 2*n;i++) {
        cin>>socks[i];
    }
        for(int i =0;i< 2*n;i++) {
        if(s.count(socks[i])){
            s.erase(socks[i]);
        } else {
         s.insert(socks[i]);
         maxVal.insert(s.size());
    }
        }
    
    cout<< *--maxVal.end();
}
