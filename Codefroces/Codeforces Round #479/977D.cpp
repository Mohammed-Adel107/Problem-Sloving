#include<bits/stdc++.h>
using namespace std;
#define all(v)				((v).begin()), ((v).end())
#define sz(v)				((int)((v).size()))
typedef long long ll;
ll count3(ll n){
    ll res=0;
    while(n%3==0){
        res++;
        n/=3;
    }
    return res;
}
void slove(){
    int n;
    cin>>n;
    vector<pair<ll,ll>>vp(n);
    for(int i=0;i<n;i++){
        cin>>vp[i].second;
        vp[i].first-=count3(vp[i].second);
    }
    sort(all(vp));
    for(auto it:vp)
        cout<<it.second<<" ";
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    slove();
}
