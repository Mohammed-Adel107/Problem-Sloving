/******************************************************************************************************

********************************************************/
#include <bits/stdc++.h>
using namespace std;
typedef  long long ll;
typedef unsigned long long ull;
typedef long double ld;
#define clr(v, d) memset(v, d, sizeof(v))
const long double pi = acos(-1), EPS = 1e-8;
#define read(i, n, a)          \
    for (ll i = 0; i < n; i++) \
        cin >> a[i];
#define cout(vec) for(auto& i : vec) cout << i << " "; cout << "\n";
#define rep(i, z, n) for (ll i = z; i < n; i++)
#define all(v) v.begin(), v.end()
#define RT(x) return cout << x << "\n", 0
#define sep(n) cout << fixed << setprecision(n)
#define sz(s) (int)(s.size())
#define pii pair<int,int>
int dx4[] = { 0, 0,  1, -1 };
int dy4[] = {  1, -1, 0,0 };
const int N=3e5+5;
const ll MOD= 1e9+7;
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
   // freopen("bad-memes.in","r",stdin);
    //    freopen("output.txt","w",stdout);
// ALL WEBSITE
   rep(i,1,N){
    arr[i]=arr[i-1]^(i-1);
   }
    int t;
    cin>>t;
    while (t--)
        slove();

// UVA
//    while(cin>>s){
////        if(m==0)
////            break;
//        slove();
//    }

    return 0;
}
