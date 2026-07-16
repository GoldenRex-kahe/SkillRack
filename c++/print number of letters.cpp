#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    cin>>s;
    vector<pair<char,int>>v;
    for(char ch:s){
        if(ch>='a'&& ch<='z'){
            v.push_back(make_pair(ch,0));
        }
        else{
            int pi=v.size()-1;
            int count=v[pi].second*10+(ch-'0');
            v[pi].second=count;
        }
    }
    for(auto[ch,rpt]:v){
        if(rpt==0)rpt=1;
        while(rpt--)cout<<ch;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}