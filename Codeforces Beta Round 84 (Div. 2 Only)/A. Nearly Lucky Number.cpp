#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll number;
    cin >> number;
    int counter = 0;
    while (number / 10 != 0)
    {
        if (number % 10 == 4 || number % 10 == 7)
        {
            counter++;
            number = number / 10;
        }
        else
        {
            number = number / 10;
        }
    }
    if (number % 10 == 4 || number % 10 == 7)
    {
        counter++;
        number = number / 10;
    }
    else
    {
        number = number / 10;
    }
    if (counter == 4 || counter == 7)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}