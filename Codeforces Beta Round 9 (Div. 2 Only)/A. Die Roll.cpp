#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define yes cout<<"YES"<<endl;
#define no cout <<"NO"<<endl;
#define MW ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

int main(){
  ll x, y;
  cin >> x >> y;
  ll z = max(x,y);
  z = 7 - z;
  if (z == 1)
  {
    cout << "1/6";
  }
  else if (z == 2)
  {
    cout << "1/3";
  }
  else if (z == 3)
  {
    cout << "1/2";
  }
  else if (z == 4)
  {
    cout << "2/3";
  }
  else if (z == 5)
  {
    cout << "5/6";
  }
  else if (z == 6)
  {
    cout << "1/1";
  }
}