//https://www.spoj.com/problems/PRIME1/

#include<bits/stdc++.h>
#define nn "\n"
#define f(i,s,n) for(int i=s;i<n;i++)
//#define co cout<<
using namespace std;
using ll=long long int;
using uint = unsigned int;
using vec=vector<int>;
using vecl=vector<ll>;
const int mod = 1e9+7;
void solve()
{
    int n,m;
    cin>>n>>m;
    for(int i = n; i<=m;i++){
        bool c = false;
        for(int j = 2;j<=sqrt(i);j++)
        {
            if(!(i%j)) {c = true; break;}
        }
        if(!c&&i!=1)cout<<i<<nn;
    }
    cout<<nn;
}
int main()
{
    //ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    solve();
    return 0;
}


output:

1
7 49
7 11 13 17 19 23 29 31 37 41 43 47
