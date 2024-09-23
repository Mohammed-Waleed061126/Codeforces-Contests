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
  ll t, vol, type, cap, res = 0, sum = 0, HY = 0, mn = INT_MAX;
  cin >> t >> vol;
  ll times = vol/2;
  bool cond = vol%2;
  vector <pair<ll,ll>> v1, v2;
  vector <ll> v;
  for (ll i = 1; i <= t; i++)
  {
    cin >> type >> cap;
    HY += cap;
    mn = min(mn, type);
    if (type == 1)
    {
      sum += 1;
      v1.push_back({cap, i});
    }
    else
    {
      sum += 2;
      v2.push_back({cap, i});
    }
  }
  if (sum <= vol)
  {
    cout << HY << el;
    for (ll i = 1; i <= t; i++)
    {
      cout << i << " ";
    }
    return;
  }
  else if (vol < type)
  {
    cout << 0 << el;
    return;
  }
  sort(v1.rbegin(),v1.rend());
  sort(v2.rbegin(),v2.rend());
  ll ind = 0, ind1 = 1, ind2 = 0, last = 0, l;
  for (ll i = 0; i < times; i++)
  {
    ll x = v1[ind].first, y = v1[ind1].first;
    if (ind1 < v1.size() && x+y > v2[ind2].first && ind2 < v2.size())
    {
      last = y, l = v1[ind1].second;
      v.push_back(v1[ind].second);
      v.push_back(v1[ind1].second);
      res += x+y;
      ind += 2;
      ind1 += 2;
    }
    else if (ind2 < v2.size())
    {
      v.push_back(v2[ind2].second);
      res += v2[ind2].first;
      ind2++;
    }
  }
  bool c = false;
  if (cond)
  {
    if (ind1 <= v1.size())
    {
      if (ind2 < v2.size())
      {
        res -= last;
        if (res+last+v1[ind].first >= res+v2[ind2].first)
        {
          res += last+v1[ind].first;
          v.push_back(v1[ind].second);
        }
        else
        {
          res += v2[ind2].first;
          c = true;
          v.push_back(v2[ind2].second);
        }
      }
      else
      {
        if (!v1.empty())
        {
          res += v1[ind].first;
          v.push_back(v1[ind].second);
        }
      }
    }
    else
    {
      res -= last;
      if (ind2 < v2.size())
      {
        if (res + last < res + v2[ind2].first)
        {
          res += v2[ind2].first;
          v.push_back(v2[ind2].second);
          c = true;
        }
      }
    }
  }
  cout << res << el;
  for (auto x:v)
  {
    if (c && l == x)
    {
      continue;
    }
    cout << x << " ";
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