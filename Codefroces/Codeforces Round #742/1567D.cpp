#include <bits/stdc++.h>
using namespace std;
void slove()
{
   ll s,n;
   cin>>s>>n;
   ll p=pow(10,int(log10(s)));
   while(n>1){
        while((s-p)<(n-1))
            p/=10;
        cout<<p<<" ";
        s-=p;
        n--;
        p=pow(10,(int(log10(s))));
   }
   cout<<s<<"\n";




}
int main()
{
    cin.tie(0);
    cout.tie(0);
    cin.sync_with_stdio(0);
    int t;
    cin>>t;
    while (t--)
        slove();

    return 0;
}
