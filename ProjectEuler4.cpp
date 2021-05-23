/*
The palindrome can be written as:

abccba

Which then simpifies to:

100000a + 10000b + 1000c + 100c + 10b + a

And then:

100001a + 10010b + 1100c

Factoring out 11, you get:

11(9091a + 910b + 100c)

So the palindrome must be divisible by 11.  Seeing as 11 is prime, at least one of the numbers must be divisible by 11.  So brute force in Python, only with less numbers to be checked:

*/
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
