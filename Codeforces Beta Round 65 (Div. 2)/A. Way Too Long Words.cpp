#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    string word;
    int size;
    for (int i = 1; i <= N; i++)
    {
        cin >> word;
        size = word.size();
        if (size > 10)
        {
            cout << word[0] << size-2 << word[size-1] << "\n";
        }
        else
        {
            cout << word << "\n";
        }
    }
}