#include <bits/stdc++.h>
using namespace std;
int cnt[10000001];
// thuat toan sap xep chon
void selectionSort(int a[], int n)
{
    // duyet tu 0 den n-1 phan tu
    for (int i = 0; i < n - 1; i++)
    {
        int min_pos = i; // gan vi tri chi so dau tien la nho nhat
        // duyet tat ca cac phan tu dung sau phan tu dau tien va cap nhan chi so cua phan tu nho nhat
        for (int j = i; j < n; j++)
        {
            if (a[j] < a[min_pos]) // chuyển > để sắp xếp tăng dần.
            {
                min_pos = j;
            }
        }
        // sau vòng for con bên trong thì chỉ min_pos đc thay đổi.
        swap(a[i], a[min_pos]); // đổi chỗ vị trí nhỏ nhất lên đầu tiên
    }
}
// Sắp xếp nổi bọt: so sánh 2 phần từ liền kề với nhau
void bubbleSort(int a[], int n)
{
    // vi du: 3 2 thì sẽ swap (3,2)=2 3
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
            }
        }
    }
}
// Sắp xếp chèn (insertSort): mỗi bước cố gắng đưa phần tử ở ví trị hiện tại về đúng ví trị
// tại ví trí chèn thì ở trước đó đã được sắp xếp
// ví dụ 1 2  5 8 9 4 10 : trước số 4 đã đc sắp xếp theo tăng dần
// cho nên là lấy số 4 chèn vào trc đó cho theo vị trí tăng dần
void insertSort(int a[], int n)
{
    for (int i = 1; i < n; i++)
    {
        // lay ra phan tu o chi so i
        int x = a[i], pos = i - 1;
        while (pos >= 0 && x < a[pos])
        {
            a[pos + 1] = a[pos];
            --pos;
        } // ket thuc khi pos=-1 thì đưa về đầu dãy
        a[pos + 1] = x; // i-1 < x thì chèn vào tại i+1.
    }
}
// Sắp xếp đếm phân phối coutingSort: đếm tuần suất xuất hiện trong mảng rồi in ra số phần từ xuất hiện bấy nhiêu lần.
void coutingSort(int a[], int n)
{ //>=0 và 10^7 cnt[max+1];
    int m = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        cnt[a[i]]++;
        m = max(m, a[i]);
    }
    for (int i = 0; i <= m; i++)
    {
        if (cnt[i] != 0)
        {
            for (int j = 0; j < cnt[i]; j++)
            {
                cout << i << " ";
            }
        }
    }
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int &x : a)
    {
        cin >> x;
    }
    selectionSort(a, n);
    for (int x : a)
    {
        cout << x << " ";
    }
}