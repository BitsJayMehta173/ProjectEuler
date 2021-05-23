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
ll n,a=999,b=998;

for(int i=a;i>900;i--)
{
  for(int j=b;j>900;j--)
  {
    n=i*j;
    string s=to_string(n);
    if(s[0]==s[5] && s[1]==s[4] && s[2]==s[3])
    {
      cout<<s;
      return 0;
    }

  }
}
}
