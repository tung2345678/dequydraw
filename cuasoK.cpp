#include <bits/stdc++.h>
using namespace std;
int cnt[1000001] = {0};
int main()
{
    int n;
    cin >> n;
    int max_val = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        cnt[x] = 1;
        max_val = max_element(max_val, x);
    }
    int dem = 0;
    for (int i = 0; i <= max_val; i++)
    {
        if (cnt[i] != 0)
        {
            ++dem;
        }
    }
    cout << dem << " ";
}