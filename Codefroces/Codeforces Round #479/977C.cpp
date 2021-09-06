#include<bits/stdc++.h>
using namespace std;
#define all(v)				((v).begin()), ((v).end())
void slove(){
   int n,k;
   cin>>n>>k;
   vector<int>arr(n);
  for(int i=0;i<n;i++)
  	cin>>arr[i];
   sort(all(arr));
    int check=0;
   if(k==0)
    check=arr[0]-1;
   else
    check=arr[k-1];
    int res=0;
  for(int i=0;i<n;i++){
    if(arr[i]<=check)
        res++;
   }
   if(res!=k||!(1<=check&&check<=N))
   {
        cout<<"-1";
        return;
   }
   cout<<check;

}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    slove();
}
