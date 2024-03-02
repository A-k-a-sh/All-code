#include<bits/stdc++.h>
using namespace std;
void print(multiset<string >&a)
{
    for(auto &s:a)cout<<s<<endl;
}
int main()
{
    multiset<string >s;//multiset can take same input more than once and make them sorted
    //s.insert("abc");
    //s.insert("bcd");
    int n;
    cin>>n;
    while(n--){
        string ss;
        cin>>ss;
        s.insert(ss);
    }
    cout<<endl;
    for(string p:s)cout<<p<<endl;
    auto it=s.find("acd");//s.find() returns an iterator
    if(it!=s.end())s.erase(it);//s.erase can take iterator
    s.erase("bcd");
    cout<<endl<<"printing after erasing:"<<endl;
    print(s);
    s.clear();
    print(s);
    return 0;
}

