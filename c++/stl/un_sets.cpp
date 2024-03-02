#include<bits/stdc++.h>
using namespace std;
void print(unordered_set<string >&a)
{
    for(auto &s:a)cout<<s<<endl;
    cout<<"hello"<<endl;
}
int main()
{
    unordered_set<string >s;//un_sets cann't take same element twice and give output reversly to input
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
