#include <bits/stdc++.h>
using namespace std;
const int N=3e5+5;
int arr[N];
void slove()
{
    int a,b;
    cin>>a>>b;
    int _xor=arr[a];
    if(_xor==b)
        cout<<a<<"\n";
    else if((_xor^b)==a)
        cout<<a+2<<"\n";
    else
        cout<<a+1<<"\n";
}
int main()
{
    cin.tie(0);
    cout.tie(0);
    cin.sync_with_stdio(0);
   for(int i=1;i<N;i++){
    arr[i]=arr[i-1]^(i-1);
   }
    int t;
    cin>>t;
    while (t--)
        slove();
    return 0;
}
