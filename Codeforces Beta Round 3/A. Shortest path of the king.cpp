#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <fstream>
#define ll long long
#define ld long double
#define pl pair<ll, ll>
#define vi vector<ll>
#define sortx(X) sort(X.begin(),X.end());
#define el "\n"
#define yes cout<<"YES"<<el;
#define no cout<<"NO"<<el;
#define imp cout<<"-1"<<el;
#define MW_HY ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ordered_set tree<int, null_type, less_equal<int>, rb_tree_tag,tree_order_statistics_node_update>
using namespace __gnu_pbds;
using namespace std;
// ----------------------------Functions---------------------------- //
ll string_to_num(char c, string word){
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
ld avg(ll size){
  ld val;
  ld sum = 0;
  for (ll i = 0; i < size; i++)
  {
    cin >> val;
    sum += val;
  }
  ld res = sum/size;
  return res;
}
string num_to_string(ll val){
  string word = "";
  while (val)
  {
    ll x = val%10;
    word = (char)(x+48) + word;
    val /= 10;
  }
  return word;
}
string binary_code(ll x){
  string word = "";
  while (x)
  {
    if (x % 2)
    {
      word = '1' + word;
    }
    else
    {
      word = '0' + word;
    }
    x /= 2;
  }
  return word;
}
bool is_prime(ll x){
  if (x == 2)
  {
    return true;
  }
  if (x < 2 || x % 2 == 0)
  {
    return false;
  }
  for (ll i = 3; i <= sqrtl(x); i+=2)
  {
    if (x % i == 0)
    {
      return false;
    }
  }
  return true;
}
bool is_palindrom(string word){
  ll start = 0, end = word.size()-1;
  while (start <= end)
  {
    if (word[start] != word[end])
    {
      return false;
    }
    start++, end--;
  }
  return true;
}
void swap(int x, int y){
  int temp = x;
  x = y;
  y = temp;
}
// ----------------------------------------------------------------- //

void solution(){
  string w, w1;
  cin >> w >> w1;
  ll d1 = w[0]-w1[0];
  ll d2 = w[1]-w1[1];
  cout << max(abs(d1),abs(d2)) << el;
  vector <string> v;
  for (ll i = 0; i < abs(d1); i++)
  {
    if (d1 < 0)
    {
      v.push_back("R");
    }
    else if (d1 > 0)
    {
      v.push_back("L");
    }
  }
  for (ll i = 0; i < min(abs(d1),abs(d2)); i++)
  {
    if (d2 < 0)
    {
      v[i] += "U";
    }
    else if (d2 > 0)
    {
      v[i] += "D";
    }
  }
  if (abs(d2) > abs(d1))
  {
    for (ll i = 0; i < abs(abs(d2)-abs(d1)); i++)
    {
      if (d2 < 0)
      {
        v.push_back("U");
      }
      else if (d2 > 0)
      {
        v.push_back("D");
      }
    }
  }
  for (auto x:v)
  {
    cout << x << el;
  }
}

int main(){ MW_HY
  //freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
  int ntimes = 1;
  //cin >> ntimes;
  while (ntimes--)
  {
    solution();
  }
}