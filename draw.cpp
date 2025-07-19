#include <bits/stdc++.h>
#include <math.h>
#include <algorithm>
#include <iomanip>
using namespace std;
void draw1(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void draw2(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j == 1 || j == n || i == 1 || i == n)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}
void draw3(int m, int n)
{
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == m || i == 1 || j == 1 || j == n)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}
void draw4(int m, int n)
{
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j == 1 || j == n || i == 1 || i == m)
            {
                cout << "*";
            }
            else
            {
                cout << "~";
            }
        }
        cout << endl;
    }
}
void draw5(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void draw6(int n)
{
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void draw7(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j <= n - i)
            {
                cout << " ";
            }
            else
            {
                cout << "*";
            }
        }
        cout << endl;
    }
}
void draw8(int n)
{
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j <= n - i) // đường chéo phụ
            {
                cout << " ";
            }
            else
            {
                cout << "*";
            }
        }
        cout << endl;
    }
    // for (int i=1;i<=n;i++)
    // {
    //     for (int j =1;j<=n;j++)
    //     {
    //         if(j<i) // đường chéo chính trong ma trận
    //         {
    //             cout<<" ";
    //         }
    //         else{
    //             cout<<"*";
    //         }
    //     }
    // }
}
void draw9(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (j == i || i == n || j == 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}
void draw10(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void draw11(int n)
{

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            if (i == 1 || i == n || j == 1 || j == 2 * i - 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}
void draw12(int n)
{
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void draw13(int n)
{
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= n - i; j++) // duyen den i
        {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) // duyetj den 2*(n-i+1)-1
        {
            if (i == 1 || i == n || j == 1 || j == 2 * i - 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}
void draw14(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j <= i)
            {
                cout << "*";
            }
            else
            {
                cout << "~";
            }
        }
        cout << endl;
    }
}
void draw15(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j <= n - i + 1)
            {
                cout << "*";
            }
            else
            {
                cout << "~";
            }
        }
        cout << endl;
    }
}
void draw16(int n, int m)
{
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= i - 1; j++)
        {
            cout << "~";
        }
        for (int j = 1; j <= n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void draw17(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j <= n - i)
            {
                cout << "~";
            }
            else
            {
                if (j == n - i + 1 || i == 1 || i == n || j == n)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
        }
        cout << endl;
    }
}
void draw18(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void draw19(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << "~";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << "~";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void draw20(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 2 * n; j++)
        {
            if (j <= n - i + 1 || j >= n + i)
            {
                cout << "*";
            }
            else
            {
                cout << "~";
            }
        }
        cout << endl;
    }
    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = 1; j <= 2 * n; j++)
        {
            if (j <= n - i + 1 || j >= n + i)
            {
                cout << "*";
            }
            else
            {
                cout << "~";
            }
        }
        cout << endl;
    }
}
void draw21(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 2 * (i - 1); j++)
        {
            cout << "~";
        }
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = 1; j <= 2 * (i - 1); j++)
        {
            cout << "~";
        }
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void draw22(int n)
{
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i - 1; j++)
        {
            cout << "~";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 1; i <= n - 1; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "~";
        }
        for (int j = 1; j <= i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void draw23(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if ((i + j) % 2 == 0)
            {
                cout << 1 << " ";
            }
            else
            {
                cout << 0 << " ";
            }
        }
        cout << endl;
    }
}
void draw24(int n)
{
    for (int i = 1; i <= n; i++)
    {
        int tmp = i;
        for (int j = 1; j <= n; j++)
        {
            cout << tmp << " ";
            ++tmp;
        }
        cout << endl;
    }
}
void draw25(int n)
{
    int cnt = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << cnt << " ";
            ++cnt;
        }
        cout << endl;
    }
}
void draw26(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j <= n - i)
            {
                cout << "~";
            }
            else
            {
                cout << i;
            }
        }
        cout << endl;
    }
}
void draw27(int n)
{
    for (int i = 1; i <= n; i++)
    {
        int kc = n - 1, tmp = i;
        for (int j = 1; j <= i; j++)
        {
            cout << tmp << " ";
            tmp += kc;
            --kc;
        }
        cout << endl;
    }
}
int min(int a, int b)
{
    if (a < b)
    {
        return a;
    }
    return b;
}
void draw28(int n)
{
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        for (int j = 1; j <= 2 * n - 1; j++)
        {
            int min_dis = min(min(i - 1, 2 * n - i - 1), min(j - 1, 2 * n - 1 - j));
            cout << n - min_dis;
        }
        cout << endl;
    }
}
void draw29(int n)
{
    for (int i = 1; i <= n; i++)
    {
        int init = n;
        for (int j = 1; j <= n; j++)
        {
            if (j < i) // cheo chinh thi giam
            {
                cout << init--;
            }
            else
            {
                cout << init; // tren cheo chinh thi giua nguyen
            }
        }
        cout << endl;
    }
}
void draw30(int n)
{
    for (int i = 1; i <= n; i++)
    {
        int tmp = i;
        for (int j = 1; j <= n; j++)
        {
            if (j < i)
            {
                cout << tmp-- << " ";
            }
            else
            {
                cout << tmp++ << " ";
            }
        }
        cout << endl;
    }
}
void draw31(int n)
{
    for (int i = 1; i <= n; i++)
    {
        int tmp = i;
        for (int j = 1; j <= n; j++)
        {
            if (j <= n - i)
            {
                cout << tmp++ << " ";
            }
            else
            {
                cout << tmp << " ";
            }
        }
        cout << endl;
    }
}
void draw32(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}
void draw33(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << "~";
        }
        int cnt = 2;
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            if (j < i)
            {
                cout << cnt;
                cnt += 2;
            }
            else
            {
                cout << cnt;
                cnt -= 2;
            }
        }
        cout << endl;
    }
}
void draw34(int n)
{
    for (int i = 1; i <= n; i++)
    {
        int cnt;
        if (i % 2 == 0)
        {
            cnt = i * (i + 1) / 2;
        }
        else
        {
            cnt = i * (i + 1) / 2 - i + 1;
        }
        for (int j = 1; j <= i; j++)
        {
            if (i % 2 == 0)
            {
                cout << cnt-- << " ";
            }
            else
            {
                cout << cnt++ << " ";
            }
        }
        cout << endl;
    }
}
void draw35(int n)
{
    int cnt = 1, kc = 1;
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            cout << cnt << " ";
            cnt += kc;
            ++kc;
        }
        cout << endl;
    }
}
void draw36(int n)
{
    for (int i = 1; i <= n; i++)
    {
        int cnt = 2;
        for (int j = 1; j <= i; j++)
        {
            if (j <= i)
            {
                cout << cnt << " ";
                cnt += 2;
            }
        }
        cnt -= 2;
        for (int j = 1; j <= i - 1; j++)
        {
            cnt -= 2;
            cout << cnt << " ";
        }
        cout << endl;
    }
}
int main()
{
    int n, m;
    cin >> m >> n;
    draw1(n);
    cout << endl;
    draw2(n);
    cout << endl;
    draw3(n, m);
    cout << endl;
    draw4(n, m);
    cout << endl;
    draw5(n);
    cout << endl;
    draw6(n);
    cout << endl;
    draw7(n);
    cout << endl;
    draw8(n);
    cout << endl;
    draw9(n);
    cout << endl;
    draw10(n);
    cout << endl;
    draw11(n);
    cout << endl;
    draw12(n);
    cout << endl;
    draw13(n);
    cout << endl;
    draw14(n);
    cout << endl;
    draw15(n);
    cout << endl;
    draw16(m, n);
    cout << endl;
    draw17(n);
    cout << endl;
    draw18(n);
    cout << endl;
    draw19(n);
    cout << endl;
    draw20(n);
    cout << endl;
    draw21(n);
    cout << endl;
    draw22(n);
    cout << endl;
    draw23(n);
    cout << endl;
    draw24(n);
    cout << endl;
    draw25(n);
    cout << endl;
    draw26(n);
    cout << endl;
    draw27(n);
    cout << endl;
    draw28(n);
    cout << endl;
    draw29(n);
    cout << endl;
    draw30(n);
    cout << endl;
    draw31(n);
    cout << endl;
    draw32(n);
    cout << endl;
    draw33(n);
    cout << endl;
    draw34(n);
    cout << endl;
    draw35(n);
    cout << endl;
    draw36(n);
}