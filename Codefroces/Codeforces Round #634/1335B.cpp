#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void slove(){
 ll n,a,b;
 cin>>n>>a>>b;
 string ans="";
 char ch='a';
 for(int i=1;i<=n;i++){
        ans+=ch;
        ch++;
        if(i%b==0)
            ch='a';
 }
 cout<<ans<<"\n";
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
