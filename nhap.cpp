#include <bits/stdc++.h>
using namespace std;
// phan thuc so nguyen to thanh dang A=p^1+p^2...
// void pt(int n)
// {
//     for (int i = 2; i <= sqrt(n); i++)
//     {
//         if (n % i == 0)
//         {
//             int dem = 0;
//             while (n % i == 0)
//             {
//                 ++dem;
//                 n /= i;
//             }
//             cout << i << "^" << dem;
//             if (n != 1)
//             {
//                 cout << " * ";
//             }
//         }
//     }
//     if (n > 1)
//     {
//         cout << n << "^1" << endl;
//     }
// }
int fibo(int n)
{
    if (n == 1)
    {
        return 0;
    }
    if (n == 2)
    {
        return 1;
    }
    return fibo(n - 1) + fibo(n - 2);
}
long long toHop(int k, int n)
{
    if (n == 0 || n == k)
    {
        return 1;
    }
    return toHop(k - 1, n - 1) + toHop(k, n - 1);
}
long long gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}
int gcd2(int a, int b)
{
    while (b != 0)
    {
        int res = a % b;
        a = b;
        b = res;
    }
    return a;
}
int main()
{
    int k, n;
    cin >> k >> n;
    cout << toHop(k, n) << endl;
    cout << gcd2(6, 8) << endl;
}