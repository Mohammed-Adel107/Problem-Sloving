#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void slove(){
 vector<string>arr;
 string x;
 for(int i=0;i<9;i++){
    cin>>x;
    for(int j=0;j<x.size();j++){
        if(x[j]=='2')
            x[j]='5';
    }
    arr.push_back(x);
 }
 for(int i=0;i<9;i++){
    cout<<arr[i]<<"\n";
 }
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
