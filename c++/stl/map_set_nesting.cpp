#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int ,multiset<string>>m;
    int n;
    cin>>n;
    while(n--){
        int a;string s;
        cin>>s>>a;
        m[a].insert(s);
    }
    //auto itb=--m.begin();
    for(auto it=--m.end();;it--){
        auto marks=(*it).first;
        auto &name=(*it).second;
        for(auto &names:name)cout<<names<<" "<<marks<<endl;
        if(it==m.begin())break;
    }
}
