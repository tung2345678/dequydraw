#include <bits/stdc++.h>
using namespace std;
bool nt(int n)
{
    if (n < 2)
    {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
bool luythuaTongChuSo(int n)
{
    int sum = 0, tmp = n, t = n;
    int dem = 0;
    while (n > 0)
    {
        ++dem;
        n /= 10;
    }
    while (tmp)
    {
        sum += pow(tmp % 10, dem);
        tmp /= 10;
    }
    return sum == t;
}
bool hoanhao(int n)
{
    int sum = 0;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            sum += i;
            if (i != n / i)
            {
                sum += n / i;
            }
        }
    }
    return sum - n == n;
}
void thuaso(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
            while (n % i == 0)
            {
                n /= i;
            }
        }
    }
    if (n != 1)
    {
        cout << n << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i < n; i++)
    {
        if (nt(i))
        {
            cout << i << " ";
        }
    }
    cout << "\n-----------------------------------\n";
    for (int i = 1; i < n; i++)
    {
        if (luythuaTongChuSo(i))
        {
            cout << i << " ";
        }
    }

    if (hoanhao(n))
    {
        cout << "1\n";
    }
    else
    {
        cout << "0\n";
    }
    cout << "\n---------------------------------------\n";
    int a, b;
    cin >> a >> b;
    for (int i = min(a, b); i <= max(a, b); i++)
    {
        if (hoanhao(i))
        {
            cout << i << " ";
        }
    }
    cout << "\n---------------------------------------\n";
    thuaso(n);
}