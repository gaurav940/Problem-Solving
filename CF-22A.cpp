#include<bits/stdc++.h>
using namespace std;

int main(){

    set<int> s;
    int n;
    cin>>n;

    for(int i=0;i< n;i++){
        int x;
        cin>>x;
        s.insert(x);
    }
    auto it = s.begin();
    if(!(s.size() < 2)) {
    cout<<*(++it);
    }
    else {
    cout<<"NO";
    }
}
