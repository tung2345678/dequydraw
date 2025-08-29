#include <bits/stdc++.h>
using namespace std;
void draw1(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i % 2 != 0)
            {
                if (j % 2 != 0)
                {
                    cout << "1 ";
                }
                else
                {
                    cout << "0 ";
                }
            }
            else
            {
                if (j % 2 != 0)
                {
                    cout << "0 ";
                }
                else
                {
                    cout << "1 ";
                }
            }
            // if ((i + j) % 2 == 0)
            // {
            //     cout << "1 ";
            // }
            // else
            // {
            //     cout << "0 ";
            // }
        }
        cout << endl;
    }
}
void draw2(int n)
{
    for (int i = 1; i <= n; i++)
    {
        int tmp = i;
        for (int i = 1; i <= n; i++)
        {
            cout << tmp << " ";
            ++tmp;
        }
        cout << endl;
    }
}
void draw3(int n)
{
    int tmp = 1;
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= n; j++)
        {
            cout << tmp << " ";
            ++tmp;
        }
        cout << endl;
    }
}
void draw4(int n)
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
void draw5(int n)
{
    for (int i = 1; i <= n; i++)
    {
        int kc = n - 1, tmp = i;
        for (int j = 1; j <= i; j++)
        {
            cout << tmp << " ";
            tmp += kc;
            kc--;
        }
        cout << endl;
    }
}
int min(int a, int b)
{
    if (a < b)
        return a;
    return b;
}
void draw16(int n)
{
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        for (int j = 1; j <= 2 * n - 1; j++)
        {
            int min_init = min(min(i - 1, 2 * n - i - 1), min(j - 1, 2 * n - 1 - j));
            cout << n - min_init << " ";
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    //     draw1(n);
    //     cout << endl;
    //     draw2(n);
    //     cout << endl;
    //     draw3(n);
    //     cout << endl;
    //     draw4(n);
    //     cout << endl;
    //     draw5(n);
    draw16(n);
}