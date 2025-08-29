#include <bits/stdc++.h>
using namespace std;
typedef int so_nguyen;
typedef long long ll;
typedef double so_thuc;
#define f float
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
bool chusont(int n)
{
    while (n)
    {
        int res = n % 10;
        if (!nt(res))
        {
            return false;
        }
        n /= 10;
    }
    return true;
}
int tongChuSo(int n)
{
    int sum = 0;
    while (n)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
// Bai 2
bool HoanHao(int n)
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
    if (sum - n == n)
    {
        return true;
    }
    return false;
}
// Bai 3
int tang(int n)
{
    while (n >= 10)
    {
        int res = n % 10;
        if (res <= (n / 10) % 10)
        {
            return 0;
        }
        n /= 10;
    }
    return 1;
}
int giam(int n)
{
    while (n >= 10)
    {
        int res = n % 10;
        if (res >= (n / 10) % 10)
        {
            return 0;
        }
        n /= 10;
    }
    return 1;
}
// Bai 4
bool fibo(int n)
{
    if (n == 0 || n == 1)
    {
        return true;
    }
    long long fn1 = 1, fn2 = 0;
    for (int i = 3; i <= 93; i++)
    {
        long long fn = fn1 + fn2;
        if (fn == n)
        {
            return true;
        }
        fn2 = fn1;
        fn1 = fn;
    }
    return false;
}
void lietKeFibo(int n)
{
    cout << "0 1 ";
    long long fn1 = 1, fn2 = 0;
    for (int i = 3; i <= n; i++)
    {
        long long fn = fn1 + fn2;
        cout << fn << " ";
        fn2 = fn1;
        fn1 = fn;
    }
}
// Bai 6
void pt(int n)
{
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            while (n % i == 0)
            {
                cout << i << " ";
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
    int a, b;
    cin >> a >> b;
    int dem = 0;
    for (int i = a; i <= b; i++)
    {
        if (nt(i) && nt(tongChuSo(i)) && chusont(i))
        {
            ++dem;
        }
    }
    cout << dem << endl;
    for (int j = a; j <= b; j++)
    {
        if (HoanHao(j))
        {
            cout << j << " ";
        }
    }
    cout << endl;
    int cnt = 0;
    for (int i = pow(10, n - 1); i < pow(10, n); i++)
    {
        if ((tang(i) || giam(i)) && nt(i))
        {
            ++cnt;
        }
    }
    cout << cnt << endl;
    for (int i = a; i <= b; i++)
    {
        if (nt(i) && fibo(tongChuSo(i)))
        {
            cout << i << " ";
        }
    }
    cout << endl;
    lietKeFibo(n);
    cout << endl;
    pt(n);
}