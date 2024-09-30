#include <bits/stdc++.h>
using namespace std;

int main(){
  string word, reverse;
  cin >> word >> reverse;
  string temp = word;
  for (int i = 0; i < word.size(); i++)
  {
    temp[i] = word[word.size()-i-1];
  }
  if (temp == reverse)
  {
    cout << "YES";
  }
  else
  {
    cout << "NO";
  }
}