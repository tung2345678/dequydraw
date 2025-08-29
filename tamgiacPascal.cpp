#include <bits/stdc++.h>
using namespace std;
long long gt(int n)
{
    long long gt = 1;
    for (int i = 1; i <= n; i++)
    {
        gt *= i;
    }
    return gt;
}
long long toHop(int n, int k)
{
    return gt(n) / (gt(k) * gt(n - k));
}
void bai10(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << toHop(i, j) << " ";
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    bai10(n);
}