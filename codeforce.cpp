#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x1, x2, y1, y2;
    int x3, y3, x4, y4;
    cin >> x1 >> y1 >> x2 >> y2;
    if (x1 == x2)
    {
        int kc = abs(y2 - y1);
        cout << x1 + kc << " " << y1 << " ";
        cout << x2 + kc << " " << y2 << endl;
    }
    else if (y1 == y2)
    {
        int side = abs(x2 - x1);
        cout << x1 << " " << y1 + side << " ";
        cout << x2 << " " << y2 + side << endl;
    }
    else if (abs(x1 - x2) == abs(y1 - y2))
    { // điều kiện để là đường chéo
        cout << x1 << " " << y2 << " ";
        cout << x2 << " " << y1 << endl;
    }
    else
    {
        cout << -1 << endl;
    }
}
