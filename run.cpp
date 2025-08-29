#include <bits/stdc++.h>
using namespace std;
bool prime[1000001];
void sang()
{
    for (int i = 0; i <= 1000000; i++)
    {
        prime[i] = true;
    }
    prime[0] = prime[1] = false;
    for (int i = 2; i <= sqrt(1000000); i++)
    {
        if (prime[i])
        {
            for (int j = i * i; j <= 1000000; j += i)
            {
                prime[j] = false;
            }
        }
    }
}
int main()
{
    sang();
    for (int i = 0; i <= 100; i++)
    {
        if (prime[i])
        {
            cout << i << " ";
        }
    }
}