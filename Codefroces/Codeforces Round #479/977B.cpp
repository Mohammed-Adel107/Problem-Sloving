#include<bits/stdc++.h>
using namespace std;
void slove(){
   int n;
   cin>>n;
   vector<char>arr(n);
   for(int i=0;i<n;i++)
   		cin>>arr[i];
   int res=0,ans=0;
   string an="";
   for(int i=0;i<n-1;i++){
        res=0;
        for(int j=0;j<n-1;j++){
            if(arr[i]==arr[j]&&arr[j+1]==arr[i+1])
                res++;
        }
        if(ans<res){
            ans=res;
            an= string(1, arr[i]) + string(1, arr[i + 1]);
        }
   }
   cout<<an;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    slove();
}
