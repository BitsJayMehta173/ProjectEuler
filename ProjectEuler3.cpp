//Jay Mehta
#include <bits/stdc++.h>
#define ll long long int
//#define fastt ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define f(i,n) for(i=2;i<n;i++)
#define n1 "\n"
#define mod 1000000007
#define max 100000000
#define loop(i,a,b) for(i=(a);i<=(b);i++)
using namespace std;
ll prime(ll n)
{
  for(ll i=2;i*i<=n;i++)
  {
    if(n%i==0)
    {
      return 0;
    }
  }
  return 1;
}
int main()
{
ll n;
cin>>n;
//cout<<n;
for(ll i=2;i*i<=n;i++)
{
  if(n%i==0)
  {
  if(prime(i))
  {
    cout<<i<<n1;

  }
  }
}
}
