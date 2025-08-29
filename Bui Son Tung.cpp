#include <iostream>
using namespace std;
// long long gcd(int a, int b)
// {
//     if (b == 0)
//     {
//         return a;
//     }
//     return gcd(b, a % b);
// }
// long long lcm(int a, int b)
// {
//     return a / gcd(a, b) * b;
// }
// long long sovle(int n, int x, int y, int z)
// {
//     long long tmp = lcm(lcm(x, y), z);
//     long long m = pow(10, n - 1);
//     long long res = (m + tmp - 1) / tmp * tmp;
//     if (res < (long long)pow(10, n))
//     {
//         return res;
//     }
//     return -1;
// }
int tien[] = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
int main()
{
    long long n;
    cin >> n;
    int index = 0;
    long long cnt = 0;
    while (n != 0)
    {
        cnt += n / tien[index];
        n %= tien[index];
        ++index;
    }
    cout << cnt << endl;
}