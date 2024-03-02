#include<bits/stdc++.h>
#define nn "\n"
using namespace std;
int  gcd_func(int a,int b)
{
    if(!(a%b))return b;
    return gcd_func(b,a%b);
}
int main()
{
    vector<int>v;
    int n;
    cin >> n;
    for(int i = 0;i < n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }

    sort(v.begin(), v.end());

    int gcd = gcd_func(v[1],v[0]);
    int lcf = (v[1]*v[0]) / gcd;
    for(int i = 2;i < v.size(); i++){
        gcd = gcd_func(v[i] , gcd);
        int gcf = gcd_func(v[i] , lcf);
        lcf = (lcf*v[i]) / gcf;
    }
    cout << "Gcd: " << gcd << nn;
    cout << "Lcm: " << lcf << nn;
}



Output:
5
2 10 4 7 6 
Gcd: 1
Lcm: 420
