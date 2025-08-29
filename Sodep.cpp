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
void pt(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
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
bool thuanNghich(int n)
{
    int res = 0;
    int tmp = n;
    while (n != 0)
    {

        res = res * 10 + n % 10;
        n /= 10;
    }
    if (res == tmp)
    {
        return true;
    }
    return false;
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
bool check(int n)
{
    if ((tongChuSo(n) % 10 == 0) && thuanNghich(n))
    {
        return true;
    }
    return false;
}
void chanLe(long long n)
{
    long long res = 0;
    int demChan = 0, demLe = 0;
    while (n)
    {
        res = n % 10;
        if (res % 2 == 0)
        {
            ++demChan;
        }
        else
        {
            ++demLe;
        }
        n /= 10;
    }
    cout << demChan << " " << demLe << endl;
}
long long gt(int n)
{
    long long gt = 1;
    for (int i = 1; i <= n; i++)
    {
        gt *= (long long)i;
    }
    return gt;
}
bool tonggiaiThua(int n)
{
    int sum = 0, tmp = n;
    while (n)
    {
        int res = n % 10;
        sum += gt(res);
        n /= 10;
    }
    if (sum == tmp)
    {
        return true;
    }
    return false;
}
bool locPhat(int n)
{

    while (n)
    {
        int res = n % 10;
        if (res != 0 && res != 6 && res != 8)
        {
            return false;
        }
        n /= 10;
    }
    return true;
}
int main()
{
    long long n;
    cin >> n;
    pt(n);
    int dem = 0;
    for (int i = pow(10, n - 1); i < pow(10, n); i++)
    {
        if (check(i))
        {
            cout << "Bai 8: " << i << " " << endl;
            ++dem;
        }
    }
    cout << dem << endl;
    cout << "-----------------------------" << endl;
    int a, b;
    cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
        if (nt(i))
        {
            cout << i << " ";
        }
    }
    cout << endl;
    cout << "++++++++++++++++++++++++" << endl;
    int z;
    cin >> z;
    chanLe(z);
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    int x, y;
    cin >> x >> y;
    for (int i = x; i <= y; i++)
    {
        if (tonggiaiThua(i))
            cout << i << " ";
    }
    cout << endl;
    cout << "============================" << endl;
    int k;
    cin >> k;
    if (locPhat(k))
    {
        cout << "1\n";
    }
    else
    {
        cout << "0\n";
    }
    return 0;
}