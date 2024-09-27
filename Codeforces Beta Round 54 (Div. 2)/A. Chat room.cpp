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
  string word;
  cin >> word;
  string ref = "hello";
  ll count = 0;
  for (ll i = 0; i < word.size() && count < ref.size(); i++)
  {
    if (word[i] == ref[count])
    {
      count++;
    }
  }
  if (count == 5)
  {
    yes
  }
  else
  {
    no
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