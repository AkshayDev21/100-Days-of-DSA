#include<bits/stdc++.h>
using namespace std;

int fact(int n)
{
      if(n==0)
      return 1;
    int res = 1;
    for (int i = 2; i <= n; i++)
        res = res * i;
    return res;
}

int nCr(int n, int r)
{
    return fact(n) / (fact(r) * fact(n - r));
}



int main()
{
    int n,x;
    
    cin>>n>>x;
    
    vector<int>v1(n);
    
    for(int i = 0 ; i < n;i++)
      cin>>v1[i];
    
    if(x == 0)
      cout<<1<<"\n";
    else if(x == 1)
      cout<<n<<"\n";
    else if(x%2 == 0)
    {
        long long int ans = 1;
        
        for(int i = 2; i <= x ; i+=2)
        {
            ans += nCr(n,i);
        }
        
        cout<<ans<<"\n";
    }
    else
    {
        long long int ans = n;
        
        for(int i = 3; i <= x; i+=2)
        {
            ans+=nCr(n,i);
        }
        
        cout<<ans<<"\n";
    }
      
}