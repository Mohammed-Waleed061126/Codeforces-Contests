#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define yes cout<<"YES"<<endl;
#define no cout <<"NO"<<endl;
#define MW ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;


int main(){ MW
  string num1, num2;
  cin >> num1 >> num2;
  for (ll i = 0; i <= num1.size()-1; i++)
  {
    if (num1[i] == num2[i])
    {
      cout << "0";
    }
    else
    {
      cout << "1";
    }
  }
}