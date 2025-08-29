#include <bits/stdc++.h>
#include <math.h>
#include <algorithm>
#include <iomanip>
using namespace std;
#define ll long long
long long gt(int n)
{
    long long gt = 1;
    for (int i = 1; i <= n; i++)
    {
        gt *= i;
    }
    return gt;
}
bool check(int n)
{
    int sum = 0;
    int tmp = n;
    while (n)
    {
        sum += gt(n % 10);
        n /= 10;
    }
    return sum == tmp;
}
// bai 2
void bai2(int n)
{
    int soDau = n;
    int tmp = n;
    while (soDau >= 10)
    {
        soDau /= 10;
    }
    cout << (soDau) << " " << (tmp % 10) << endl;
}
int bai3(int n)
{
    int sum = 0;
    while (n)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
bool bai4(int n)
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
bool bai6(int n)
{
    for (int p = 2; p <= sqrt(n); p++)
    {
        if (bai4(p))
        {
            long long tmp = pow(2, p) - 1;
            if (bai4(tmp))
            {
                long long tich = tmp * pow(2, p - 1);
                if (tich == n)
                {
                    return true;
                }
            }
        }
    }
    return false;
}

void bai7(int n)
{
    int total = n;
    int last = n % 10;
    int digit = 0;
    int first = n;
    while (first > 10)
    {
        first /= 10;
        ++digit;
    }
    int middle = (n % (int)pow(10, digit) / 10);
    int kq = last * (int)pow(10, digit) + middle * 10 + first;
    cout << kq << endl;
}
int bai8(int n)
{
    int cnt = 0;
    while (n)
    {
        ++cnt;
        n /= 10;
    }
    return cnt;
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
bool bai9(int n)
{
    int sum = 0; // de tinh tong chu so.
    int mu = 0;  // dem so chu so tuong duong voi so mu
    int tmp = n; // tinh tong chu so mu
    int r = n;   // kiem tra xem sum==n ko?
    while (n)
    {
        ++mu;
        n /= 10;
    }
    while (tmp)
    {
        int res = tmp % 10;
        sum += pow(res, mu);
        tmp /= 10;
    }
    return sum == r;
}
bool bai11(int n)
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
int thuanNghich(int n)
{
    int res = 0, tmp = n;
    while (n)
    {
        res = res * 10 + n % 10;
        n /= 10;
    }
    return res == tmp;
}
bool Chuso9(int n)
{

    while (n)
    {
        if (n % 10 == 9)
        {
            return false;
        }
        n /= 10;
    }
    return true;
}
bool bai16(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            int dem = 0;
            while (n % i == 0)
            {
                ++dem;
                n /= i;
            }
            if (dem == 2)
            {
                return true;
            }
        }
    }
    return false;
}
void bai17(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            while (n % i == 0)
            {
                cout << i;
                n /= i;
                if (n != 1)
                {
                    cout << "x";
                }
            }
        }
    }
    if (n > 1)
    {
        cout << n << endl;
    }
}
long long rev(long long n)
{
    long long res = 0;
    while (n)
    {
        res = res * 10 + n % 10;
        n /= 10;
    }
    return res;
}
void bai18(long long n)
{
    int c2 = 0, c3 = 0, c5 = 0, c7 = 0;
    long long m = rev(n);
    while (n)
    {
        int res = n % 10;
        if (res == 2)
            ++c2;
        else if (res == 3)
            ++c3;
        else if (res == 5)
            ++c5;
        else if (res == 7)
            ++c7;
        n /= 10;
    }
    // theo thu tu tang dan
    // if(c2!=0) cout<<"2"<<" "<<c2;
    // if(c3!=0) cout<<"3"<<" "<<c3;
    // if(c5!=0) cout<<"5"<<" "<<c5;
    // if(c7!=0) cout<<"7"<<" "<<c7;
    while (m)
    {
        int r = n % 10;
        if (r == 2 && c2 != 0)
        {
            cout << "2" << " " << c2;
            c2 = 0;
        }
        else if (r == 3 && c3 != 0)
        {
            cout << "2" << " " << c3;
            c3 = 0;
        }
        else if (r == 5 && c5 != 0)
        {
            cout << "5" << " " << c5;
            c5 = 0;
        }
        else if (r == 7 && c7 != 0)
        {
            cout << "7" << " " << c7;
            c7 = 0;
        }
        m /= 10;
    }
}
bool bai19(int n)
{
    int res = 0;
    int tmp = n;
    while (n)
    {
        res = res * 10 + n % 10;
        n /= 10;
    }
    return res != tmp && bai4(res);
}
bool bai20(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {

        if (bai4(i))
        {
            if (n % i == 0)
            {
                if (n % (i * i) != 0)
                {
                    return false;
                }
            }
        }
    }
    return true;
}
int main()
{
    int n;
    cin >> n;
    if (check(n))
    {
        cout << "1\n";
    }
    else
    {
        cout << "0\n";
    }

    bai2(n);
    cout << bai3(n) << endl;
    if (bai4(n))
    {
        cout << "1\n";
    }
    else
    {
        cout << "NO\n";
    }
    cout << 1ll * gt(n) << endl;
    for (int i = 1; i < n; i++)
    {
        if (bai6(i))
        {
            cout << i << " ";
        }
    }
    cout << endl;
    bai7(n);
    cout << bai8(n) << endl;
    if (bai9(n))
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
    bai10(n);
    cout << endl;
    if (bai11(n))
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
    cout << "Bai 12." << endl;
    int x;
    cin >> x;
    int dem;
    for (int i = 1; i < x; i++)
    {
        if (bai4(i) && tongChuSo(i) % 5 == 0)
        {
            cout << i << " ";
            ++dem;
        }
    }
    cout << "\n";
    cout << dem << endl;
    for (int i = 2; i < x; i++)
    {
        if (thuanNghich(i) && Chuso9(i))
        {
            cout << i << " ";
        }
    }
    cout << "Bai 14\n";
    int max = -1;
    for (int i = 1; i < x; i++)
    {
        if (bai4(i))
        {
            int last = i % 10;
            if (last > max)
            {
                max = last;
            }
        }
    }
    int cnt = 0;
    for (int i = 2; i < x; i++)
    {
        if (bai4(i) && i % 10 == max)
        {
            cout << i << " ";
            cnt++;
        }
    }
    cout << endl;
    cout << cnt << endl;
    int a, b;
    cin >> a >> b;
    int tongA = tongChuSo(a);
    int tongB = tongChuSo(b);
    if (tongA < tongB || tongA == tongB)
    {
        cout << a << " " << b << endl;
    }
    else
    {
        cout << b << " " << a << endl;
    }
    for (int i = a; i <= b; i++)
    {
        if (bai16(i))
        {
            cout << i << " ";
        }
    }
    cout << endl;
    bai17(x);
    bai18(x);
    cout << endl;
    for (int i = a; i <= b; i++)
    {
        if (bai4(i) && bai19(i))
        {
            cout << i << " ";
        }
    }
    cout << endl;
    for (int i = a; i <= b; i++)
    {
        if (bai20(i))
        {
            cout << i << " ";
        }
    }
}