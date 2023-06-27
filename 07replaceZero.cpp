#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void replaceZero(vector<int> &nums)
{

    int i = 0;
    for (int j = 0; j < nums.size(); j++)
    {
        if (nums[j] != 0)
        {
            swap(nums[i], nums[j]);
            i++;
        }
    }
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (auto &i : arr)
    {
        cin >> i;
    }

    replaceZero(arr);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
