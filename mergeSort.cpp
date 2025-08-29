#include <bits/stdc++.h>
using namespace std;
void merge(int a[], int l, int mid, int r)
{
    vector<int> x(a + l, a + mid + 1);
    vector<int> y(a + mid + 1, a + r + 1);
    int i = 0, j = 0;
    while (i < x.size() && j < y.size())
    {
        if (a[i] < a[j])
        {
            a[l] = x[i];
            ++i;
            ++l;
        }
        else
        {
            a[l] = y[j];
            ++j;
            ++l;
        }
    }
    while (i < x.size())
    {
        a[l] = x[i];
        ++i;
        ++l;
    }
    while (j < y.size())
    {
        a[l] = y[j];
        ++j;
        ++l;
    }
}
void mergeSort(int a[], int l, int r)
{
    if (l >= r)
    {
        return;
    }
    int mid = (l + r) / 2;
    mergeSort(a, l, mid);
    mergeSort(a, mid + 1, r);
    merge(a, l, mid, r);
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
    mergeSort(a, 0, n - 1);
    for (int x : a)
    {
        cout << x << " ";
    }
}