#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        ll cnt=0,cnt2=0;
        for(int i=0;i<s.size();i++)
          {
            if(s[i]=='0')
              cnt++;
          else
              cnt2++;
    }
    int mn = min(cnt,cnt2);
    if(mn%2!=0)
      cout<<"DA"<<endl;
    else
     cout<<"NET"<<endl;
}
}
