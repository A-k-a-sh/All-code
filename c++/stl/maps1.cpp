#include<bits/stdc++.h>
using namespace std;
using ll=long long int ;
int main()
{
    map<string ,int >m;
    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        m[s]++;
    }
    for(auto it=m.begin();it!=m.end();it++)cout<<(it->first)<<" "<<(it->second)<<endl;
}
