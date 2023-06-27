#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> findError(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    int dub = 0, missing = 0;

    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] == nums[i - 1])
        {
            dub = nums[i];
            break;
        }
    }

    for (int i = 1; i <= nums.size(); i++)
    {
        if (!binary_search(nums.begin(), nums.end(), i))
        {
            missing = i;
            break;
        }
    }

    return {dub, missing};
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    vector<int> ans = findError(arr);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}
