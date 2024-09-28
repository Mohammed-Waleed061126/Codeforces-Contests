#include <bits/stdc++.h>
using namespace std;

int main(){
    string word;
    cin >> word;
    int uppercase = 0, lowercase = 0;
    for (int i = 0; i <= word.size()-1; i++)
    {
        if (word[i] < 97)
        {
            uppercase++;
        }
        else
        {
            lowercase++;
        }
    }
    if (uppercase > lowercase)
    {
        for (int i = 0; i <= word.size()-1; i++)
        {
            if (word[i] < 97)
            {}
            else
            {
                word[i] -= 32;
            }
        }
    }
    else
    {
        for (int i = 0; i <= word.size()-1; i++)
        {
            if (word[i] < 97)
            {
                word[i] += 32;
            }
        }
    }
    cout << word;
}