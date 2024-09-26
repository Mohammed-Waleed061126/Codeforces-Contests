#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define yes cout<<"YES"<<endl;
#define no cout <<"NO"<<endl;
#define MW ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;


int main(){ MW
  string word;
  cin >> word;
  for (ll i = 0; i <= word.size()-1; i++)
  {
    if (word[i] == '.')
    {
      cout << 0;
    }
    else if (word[i] == '-' && word[i+1] == '.')
    {
      cout << 1;
      i++;
    }
    else if (word[i] == '-' && word[i+1] == '-')
    {
      cout << 2;
      i++;
    }
  }
}