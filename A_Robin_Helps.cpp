#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int robiner_coin=0;
        int ans=0;
        for(int i=0;i<n;i++){
            if(v[i]>=k){
               robiner_coin+=v[i];
            }
             else if(v[i]==0 && robiner_coin>0){
              ans++;
              robiner_coin--;
             }
        }
        cout<<ans<<endl;
    }
}
