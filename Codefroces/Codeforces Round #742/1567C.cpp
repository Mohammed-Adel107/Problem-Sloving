
#include <bits/stdc++.h>
using namespace std;
void slove()
{
   string s;
   cin>>s;
   int x=0,y=0;
   for(int i=0;i<s.size();i++){
        if(i%2)
            x=(x*10)+(s[i]-'0');
        else
            y=(y*10)+(s[i]-'0');
   }
   cout<<(x+1)*(y+1)-2<<"\n";
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
