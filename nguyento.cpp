// Liệt kê chữ số nguyên tố theo thứ tự n và số lần xuất hiện
#include <bits/stdc++.h>
using namespace std;
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
    // theo chữ số nguyên tố tăng dần
    // if (c2 != 0)
    //     cout << "2 " << " " << c2 << endl;
    // if (c3 != 0)
    //     cout << "3 " << " " << c3 << endl;
    // if (c5 != 0)
    //     cout << "5 " << " " << c5 << endl;
    // if (c7 != 0)
    //     cout << "7 " << " " << c7 << endl;
    while (m)
    {
        int r = m % 10;
        if (r == 2 && c2 != 0)
        {
            cout << "2 " << " " << c2 << endl;
            c2 = 0;
        }
        else if (r == 3 && c3 != 0)
        {
            cout << "3 " << " " << c3 << endl;
            ;
            c3 = 0;
        }
        else if (r == 5 && c5 != 0)
        {
            cout << "5 " << " " << c5 << endl;
            c5 = 0;
        }
        else if (r == 7 && c7 != 0)
        {
            cout << "7 " << " " << c7 << endl;

            c7 = 0;
        }
        m /= 10;
    }
}

int main()
{
    long long n;
    cin >> n;
    bai18(n);
}