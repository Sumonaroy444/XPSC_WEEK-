#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<k;i++){
        int key;
        cin>>key;
        int l=0,r=n-1,mid,ans=-1;
        while(l<=r){
            mid = (l+r)/2;
            if(key>= v[mid]){
                ans = mid;
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        }
        cout<<ans+1<<endl;
    }
}

