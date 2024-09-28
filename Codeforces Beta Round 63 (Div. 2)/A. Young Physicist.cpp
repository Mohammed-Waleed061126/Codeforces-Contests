#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define pl pair<ll, ll>
#define vi vector<ll>
#define sortx(X) sort(X.begin(),X.end());
#define el "\n"
#define yes cout<<"YES"<<el;
#define no cout<<"NO"<<el;
#define MW_HY ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
// ----------------------------Functions---------------------------- //
long long string_to_num(char c, string word){
  ll val = 0;
  if (c == 'x')
  {
    for (ll i = 0; i < word.size(); i++)
    {
      val *= 10;
      val += word[i]-48;
    }
  }
  else
  {
    val += c-48;
  }
  return val;
}

void solution(){
  ll n, x, y, z;
  ll sum_x = 0, sum_y = 0, sum_z = 0;
  cin >> n;
  while (n--)
  {
    cin >> x >> y >> z;
    sum_x += x;
    sum_y += y;
    sum_z += z;
  }
  if (sum_x || sum_y || sum_z)
  {
    no
  }
  else
  {
    yes
  }
}

int main(){ MW_HY
  int ntimes  = 1;
  //cin >> ntimes;
  while (ntimes--)
  {
    solution();
  }
}