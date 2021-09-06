#include <bits/stdc++.h>
using namespace std;
void slove()
{
   int n;
   cin>>n;
   string s;
   cin>>s;
  for(int i=0;i<n;i++){
    if(s[i]=='U')
        cout<<'D';
    else if(s[i]=='D')
        cout<<'U';
    else
        cout<<s[i];
   }
   cout<<"\n";





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
