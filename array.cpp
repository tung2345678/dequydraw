#include <bits/stdc++.h>
using namespace std;
int Sum(int n)
{
    int sum = 0;
    while (n)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
bool comp(int a, int b)
{
    if (Sum(a) <= Sum(b))
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int &x : a)
    {
        cin >> x;
    }
    sort(a, a + n, comp);
    for (int x : a)
    {
        cout << x << ' ';
    }
}