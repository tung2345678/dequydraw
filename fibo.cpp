#include <bits/stdc++.h>
using namespace std;
typedef int songuyen;
typedef long long songuyendai;
typedef float sothuc;

#define ll long long
#define songuyen int
#define PI 3.14
#define MAXN (int)1e9
#define MOD 1000000007
#define FOR(i, a, b) for (int i = (a); i <= (b); i++)

bool fibo(long long n)
{
    if (n == 0 || n == 1)
    {
        return true;
    }
    else
    {
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
    }
    return false;
}
void fibo1(long long n)
{
    cout << "0\n1\n";
    long long fn1 = 1, fn2 = 0;
    for (int i = 3; i <= n; i++)
    {
        long long fn = fn1 + fn2;
        cout << fn << endl;
        fn2 = fn1;
        fn1 = fn;
    }
}
void fibo2(long long n)
{
    cout << "1\n1\n";
    long long fn1 = 1, fn2 = 1;
    for (int i = 3; i <= n; i++)
    {
        long long fn = fn1 + fn2;
        cout << fn << endl;
        fn2 = fn1;
        fn1 = fn;
    }
}
int main()
{
    int n;
    cin >> n;
    if (fibo(n))
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
    fibo1(n);
    fibo2(n);
    FOR(i, 10, 20)
    {
        cout << i << " ";
    }
}