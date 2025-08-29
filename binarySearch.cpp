#include <bits/stdc++.h>
using namespace std;
bool binarySearch(int a[], int n, int x)
{
    int left = 0, right = n - 1;
    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (a[mid] == x)
        {
            return true;
        }
        else if (a[mid] < x)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return false;
}
// Tìm vị trí xuất hiện đầu tiên của phần tử X trong mảng tăng dần O(logN)
int pos1(int a[], int n, int x)
{
    int left = 0, right = n - 1;
    int res = -1;
    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (a[mid] == x)
        {
            res = mid;       // ghi nhận lại kết quả
            right = mid - 1; // đi tìm kết quả tốt hơn
            // tìm kiếm cuối cùng
            // left=mid+1;
        }
        else if (a[mid] < x)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return res;
}
// tìm vị trí xuất hiện cuối cùng của phần tử x trong mảng đã được sắp xếp O(longN)
int pos2(int a[], int n, int x)
{
    int left = 0, right = n - 1;
    int res = -1;
    while (left <= right)
    {
        int mid = (left + right) / 2;

        if (a[mid] == x)
        {
            res = mid;
            left = mid + 1;
        }
        else if (a[mid] < x)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }

        return res;
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
    cout << pos1(a, n, 2) << endl;
}