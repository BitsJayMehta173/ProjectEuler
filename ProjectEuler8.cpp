//Jay Mehta
#include <bits/stdc++.h>
#define fastt ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long int
#define n1 "\n"
using namespace std;

int main()
{
  string s;
  cin>>s;
  string k;
  cin>>k;
  int n=s.length();
  ll prod=1,maxe=-1,o;
  for(int i=0;i<n-13;i++)
  {
    prod=1;
    for(int j=i;j<i+13;j++)
    {
    k[0]=s[j];
    int l=stoi(k);
    prod=l*prod;
    }
    if(maxe<prod)
    {
      maxe=prod;
    }
  }
  cout<<maxe;
}
