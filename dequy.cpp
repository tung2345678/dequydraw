#include <bits/stdc++.h>
using namespace std;
void nhiPhan(long long n)
{
    if (n != 0)
    {
        nhiPhan(n / 2);
        cout << n % 2;
    }
}
void lucPhan(long long n)
{
    if (n != 0)
    {
        lucPhan(n / 16);
        int res = n % 16;
        if (res < 16)
        {
            cout << res;
        }
        else
        {
            cout << (char)(res + 55);
        }
    }
}
// in ra so nguyen
void dq(int n)
{
    if (n < 10)
    {
        cout << n;
    }
    else
    {
        cout << n % 10 << " ";
        dq(n / 10);
    }
}
// in trai qua phai
void dq2(int n)
{
    if (n < 10)
    {
        cout << n;
    }
    else
    {
        dq(n / 10);
        cout << n % 10 << " ";
    }
}
// tong chan le
int tongChan(int n)
{
    if (n < 10)
    {
        if (n % 2 == 0)
        {
            return n;
        }
        else
        {
            return 0;
        }
    }
    else
    {
        int res = n % 10;
        if (res % 2 == 0)
        {
            return res + tongChan(n / 10);
        }
        else
        {
            return tongChan(n / 10);
        }
    }
}
int tongLe(int n)
{
    if (n < 10)
    {
        if (n % 2 != 0)
        {
            return n;
        }
        else
        {
            return 0;
        }
    }
    else
    {
        int res = n % 10;
        if (res % 2 != 0)
        {
            return res + tongLe(n / 10);
        }
        else
        {
            return tongLe(n / 10);
        }
    }
} // ham dem chu so chan le
int demChan(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        int res = n % 10;
        if (res % 2 == 0)
        {

            return 1 + demChan(n / 10);
        }
        return demChan(n / 10);
    }
}
int demLe(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        int res = n % 10;
        if (res % 2 != 0)
        {
            return 1 + demLe(n / 10);
        }
        return demLe(n / 10);
    }
}
// so thao tac bien doi it nhat ve .1.
int solve(int n)
{
    if (n == 1)
    {
        return 0;
    }
    if (n % 2 == 0)
    {
        return 1 + solve(n / 2);
    }
    if (n % 3 == 0)
    {
        return 1 + solve(n / 3);
    }
    if (n > 1)
    {
        return 1 + solve(n - 1);
    }
}
int main()
{
    int n;
    cin >> n;
    // nhiPhan(n);
    // cout << endl;
    // lucPhan(n);
    dq(n);
    cout << endl;
    dq2(n);
    cout << endl;
    cout << tongChan(n) << endl;
    cout << tongLe(n) << endl;
}