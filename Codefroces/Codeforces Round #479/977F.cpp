#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void slove(){
    int n;
    cin>>n;
    vector<ll>arr(n);
    map<ll,ll>mp;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mp[arr[i]]=mp[arr[i]-1]+1;
    }
    ll mxn=0,first=0;
    for(int i=0;i<n;i++){
        if(mp[arr[i]]>mxn){
            mxn=mp[arr[i]];
            first=arr[i];
        }
    }
    cout<<mxn<<"\n";
    ll fs=first-mxn+1;
    for(int i=0;i<n;i++){
        if(arr[i]==fs){
            cout<<i+1<<" ";
            fs++;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    slove();
}
