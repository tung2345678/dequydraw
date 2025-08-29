#include <bits/stdc++.h>
using namespace std;
bool isPrime[10000001];
void Sang()
{
    for (int i=0;i<=1000000;i++)
    {
        isPrime[i]=true;
    }
    isPrime[0]=isPrime[1]=false;
    for (int i =2;i<=sqrt(1000000);i++)
    {
        if(isPrime[i])
        {
            for(int j =i*i;j<=1000000;j+=i)
            {
                isPrime[j]=false;
            }
        }
    }
}
int main ()
{
    int n;
    cin>>n;
    for(int p=2;p<=sqrt(n);p++)
    {
        int q=n-p;
        if(isPrime[p]&&isPrime[q])
        {
            cout<<p<<" + "<<q<<endl;
        }
    }

}