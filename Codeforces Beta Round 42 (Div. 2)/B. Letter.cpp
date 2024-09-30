#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <fstream>
const double pi = acos(-1.0);
#define ll long long
#define ld long double
#define pl pair<ll, ll>
#define vi vector<ll>
#define sortx(X) sort(X.begin(),X.end());
#define el "\n"
#define yes cout<<"YES"<<el;
#define no cout<<"NO"<<el;
#define imp cout<<"-1"<<el;
#define Y_N if(cond){yes}else{no}
#define fwd(i,a,b) for(int i=a;i<b;i++)
#define bwd(i,a,b) for(int i=a;i>=b;i--)
#define MW_HY ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ordered_set tree<int, null_type, less_equal<int>, rb_tree_tag,tree_order_statistics_node_update>
using namespace __gnu_pbds;
using namespace std;
// ----------------------------Functions---------------------------- //
void Mohammed_Waleed(){
//   MW_HY
  // #ifndef ONLINE_JUDGE
  //   freopen("input.txt", "r", stdin);
  //   freopen("output.txt", "w", stdout);
  // #endif
}
// ----------------------------------------------------------------- //
void solution(){
  string a, b;
  getline(cin, a);
  getline(cin, b);
  ll freq_a[320]={};
  ll freq_b[320]={};
  for (ll i = 0; i < a.size(); i++)
  {
    if (a[i]!=' ')
    {
        freq_a[a[i]]++;
    }
  }
  for (ll i = 0; i < b.size(); i++)
  {
    if (b[i]!=' ')
    {
        freq_b[b[i]]++;
    }
  }
  for (ll i = 0; i < 320; i++)
  {
    if (freq_b[i] > freq_a[i])
    {
        no
        return;
    }
  }
  yes
}

int main(){
  Mohammed_Waleed();
  int ntimes = 1;
  //cin >> ntimes;
  while (ntimes--)
  {
    solution();
  }
}