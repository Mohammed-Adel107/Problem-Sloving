#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int a[105][105]={};
const int N=2e5+5;
int pre[210][N]={};
vector<vector<int>>pos(210);
void slove(){
    int n;
  cin>>n;
  vector<int>arr(n+1);

  for(int i=1;i<=200;++i)
    {
			for(int j=1;j<=n;++j)
				pre[i][j]=0;
			pos[i].clear();
    }
   for(int i=1;i<=n;i++){
      cin>>arr[i];
      pre[arr[i]][i]++;
      pos[arr[i]].push_back(i);
  }
  int ans=0;
  for(int i=1;i<=200;i++){
    for(int j=1;j<=n;j++)
        pre[i][j]+=pre[i][j-1];
    ans=max(ans,pre[i][n]);
  }
  for(int i=1;i<=n;i++){
    int cnt=pre[arr[i]][i];
    int l=pos[arr[i]][cnt-1];
    int r=pos[arr[i]][(int)pos[arr[i]].size()-cnt];
    l++,r--;
    if(l>r)
        continue;
    for(int j=1;j<=200;j++){
        ans=max(ans,(cnt*2+pre[j][r]-pre[j][l-1]));
    }
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
