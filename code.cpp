#include <bits/stdc++.h>
using namespace std;
void tongChuSo(long long n)
{
    long long sum = 0;
    while (n != 0)
    {
        sum += n % 10;
        n /= 10;
    }
    n = sum; // chỗ này gán giá trị nên n phải truyền tham chiếu
    // sau lệnh này thì n thay đổi giá trị ko thay đổi vị trí
    //  lúc này hàm void và main có n cùng vị trí
}
int main()
{
    long long n;
    cin >> n;
    while (n > 9)
    {
        tongChuSo(n);
    }
    cout << n << endl;
}