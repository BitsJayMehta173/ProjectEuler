//Jay Mehta
#include <bits/stdc++.h>
#define ll long long int
#define fastt ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define f(i,n) for(i=0;i<n;i++)
#define n1 "\n"
#define mod 1000000007
#define max 100000000
#define loop(i,a,b) for(i=(a);i<=(b);i++)
using namespace std;
int main()
{
  fastt;
ll n,i,sum=0,k=0;
ll x=1,y=2;
while(x<4000000)
{
  k=x+y;
  if(k%2==0)
  {sum+=k;}
  x=y;
  y=k;
}
cout<<sum;
}
