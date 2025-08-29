#include <bits/stdc++.h>
using namespace std;
bool nt(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return n > 1;
}
bool hoanHao(long long n)
{
    for (int p = 2; p <= 33; p++)
    {
        if (nt(p))
        {
            long long tmp = pow(2, p) - 1;
            if (nt(tmp))
            {
                long long tich = tmp * 1ll * pow(2, p - 1);
                if (tich == n)
                {
                    return true; // la so hoan hao
                }
            }
        }
    }
    return false;
}

int main()
{
    long long n;
    cin >> n;
    if (hoanHao(n))
    {
        COUT << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}