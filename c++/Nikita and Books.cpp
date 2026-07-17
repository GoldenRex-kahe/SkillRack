#include <bits/stdc++.h>
using namespace std;
void solve(){
    int N;cin>>N;
    vector<int> arr(N+1);
    for(int stk=1;stk<=N;stk++) cin>>arr[stk];
    long long int bal=0;
    bool ok=true;
    for(int stk=1;stk<=N;stk++){
        if(arr[stk]>stk) bal+=(arr[stk]-stk);
        else{
            int need=stk-arr[stk];
            if(bal>=need){
                bal-=need;
            }
            else{
                ok=false; break;
            }
        }
    }
    cout<<(ok?"YES":"NO")<<endl;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int T;
    cin >> T;
 
    while (T--) {
        solve();
    }
 
    return 0;
}