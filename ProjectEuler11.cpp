//Jay Mehta
#include <bits/stdc++.h>
#define ll long long int
#define fastt ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define f(i,n) for(i=0;i<n;i++)
#define n1 "\n"
#define mod 1000000007
#define maxe 100000000
#define loop(i,a,b) for(i=(a);i<(b);i++)
using namespace std;

int main()
{
  fastt;
  ll max,i,j;
  int a[20][20];
  f(i,20)
  {
    f(j,20)
    {cin>>a[i][j];}
  }
  int q[10000],p=0;
for(int i=0;i<20-4;i++)
{
  for(int j=0;j<20-4;j++)
  {
    q[p]=a[i][j]*a[i][j+1]*a[i][j+2]*a[i][j+3];
    p++;
    q[p]=a[i+1][j]*a[i+1][j+1]*a[i+1][j+2]*a[i+1][j+3];
    p++;
    q[p]=a[i+2][j]*a[i+2][j+1]*a[i+2][j+2]*a[i+2][j+3];
    p++;
    q[p]=a[i+3][j]*a[i+3][j+1]*a[i+3][j+2]*a[i+3][j+3];
    p++;
    q[p]=a[i][j]*a[i+1][j]*a[i+2][j]*a[i+3][j];
    p++;
    q[p]=a[i][j+1]*a[i+1][j+1]*a[i+2][j+1]*a[i+3][j+1];
    p++;
    q[p]=a[i][j+2]*a[i+1][j+2]*a[i+2][j+2]*a[i+3][j+3];
    p++;
    q[p]=a[i][j+3]*a[i+1][j+3]*a[i+2][j+3]*a[i+3][j+3];
    p++;
    q[p]=a[i][j]*a[i+1][j+1]*a[i+2][j+2]*a[i+3][j+3];
    p++;
    q[p]=a[i+3][j]*a[i+2][j+1]*a[i+1][j+2]*a[i][j+3];
    p++;
  }
}

    max=*max_element(q,q+p);
    cout<<max<<n1;

}
