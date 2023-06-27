#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int findUniqueChar(string str)
{
    int n = str.length();

    map<int, int> m;

    for (auto i : str)
        m[i]++;

    for (int i = 0; i < n; i++)
    {
        if (m[str[i]] == 1)
            return i;
    }
    return -1;
}

int main()
{
    string str;
    getline(cin, str);
    int ans = findUniqueChar(str);
    cout << ans;
    return 0;
}