#include <bits/stdc++.h>
using namespace std;
bool tn(int n)
{
    int res = 0, tmp = n;
    while (n)
    {
        res = res * 10 + n % 10;
        n /= 10;
    }
    return res == tmp;
}
bool so6(int n)
{
    while (n)
    {
        int res = n % 10;
        if (res == 6)
        {
            return true;
        }
        n /= 10;
    }
    return false;
}
bool ketthucso8(int n)
{
    int sum = 0;
    while (n)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum % 10 == 8;
}
long long tich(int n)
{
    long long tich = 1;
    while (n)
    {
        tich *= n % 10;
        n /= 10;
    }
    return tich;
}
void uoc(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
                }
    }
}
int main()
{
    int a, b;
    cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
        if (tn(i) && so6(i) && ketthucso8(i))
        {
            cout << i << " ";
        }
    }
    cout << endl;
    int n;
    cin >> n;
    cout << tich(n) << endl;
    uoc(n);
}