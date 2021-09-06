#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void slove(){
 ll n;cin>>n;
    vector<ll>arr(n);
    map<ll,ll>mp;
    for(int i=0;i<n;i++){
        cin>>arr[i],mp[arr[i]]++;
    }
    ll mxthesameskills=0;
    for(auto it:mp)
        mxthesameskills=max(mxthesameskills,it.second);
    ll cs=min((ll)sz(mp),mxthesameskills-1);
    ll xc=min((ll)sz(mp)-1,mxthesameskills);
    cout<<max(cs,xc)<<"\n";


}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin>>t;
   while(t--)
    slove();
}
