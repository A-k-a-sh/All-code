#include<bits/stdc++.h>
#define nn "\n";
using namespace std;
void divisor(int n)
{
    vector<vector<int>>v(n+1);
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j+=i) v[j].push_back(i);
    }
    cout<<"From 1 to n all the divisors are following: "<<nn;
    for(int i=1;i<v.size();i++){
        if(!v[i].empty())
        {
            cout<<i<<nn;
            for(auto &x:v[i])cout<<x<<" ";
        }
        cout<<"=>Total = "<<v[i].size();
        cout<<"; Sum: "<<accumulate(v[i].begin(),v[i].end(),0);
        cout<<nn;
    }
    //if(v[0].empty())cout<<"yes"<<nn;
    //if(!v[0].empty()) cout<<"no"<<nn;
    //cout<<"Number of "<<n<<"'th divisor: "<<v[n].size()<<nn;
    //cout<<"sum of "<<n<<"'th divisor: "<<sum<<nn;
}
int main()
{
    //cout<<"Enter n: ";
    int n;
    cin>>n;
    divisor(n);
    return 0;
}

```
10
From 1 to n all the divisors are following: 
1
1 =>Total = 1; Sum: 1
2
1 2 =>Total = 2; Sum: 3
3
1 3 =>Total = 2; Sum: 4
4
1 2 4 =>Total = 3; Sum: 7
5
1 5 =>Total = 2; Sum: 6
6
1 2 3 6 =>Total = 4; Sum: 12
7
1 7 =>Total = 2; Sum: 8
8
1 2 4 8 =>Total = 4; Sum: 15
9
1 3 9 =>Total = 3; Sum: 13
10
1 2 5 10 =>Total = 4; Sum: 18```
