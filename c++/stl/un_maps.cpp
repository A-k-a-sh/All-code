#include<bits/stdc++.h>
using namespace std;
void print1(unordered_map<string,int>&a)
{
    cout<<"size is :"<<a.size()<<endl;
    for(auto &p:a)cout<<p.first<<" "<<p.second<<endl;
}
void print(unordered_map<int,string>&a)
{
    for(auto &p:a)cout<<p.first<<" "<<p.second<<endl;
}
int main()
{
    //unorder maps:
    //everything is same as order map just vary in declaration

    unordered_map<int ,string>m;
    m[1]="abc";
    m[5]="bcd";
    m[5]="cde";
    m.insert({8,"avg"});
    m.insert({9,"bgm"});
    m.insert({4,"def"});
    for(auto it=m.begin();it!=m.end();it++)cout<<(it->first)<<" "<<(it->second)<<"\n";
    cout<<"\n";
    cout<<"another way:"<<endl;
    for(auto &v:m)cout<<v.first<<" "<<v.second<<endl;

    unordered_map<string ,int >m1;
    m1["beg"]=5;
    m1["abc"]=1;
    m1["deg"]=6;
    cout<<"printing another map: "<<endl;
    print1(m1);
    auto i=m.find(4);//takes input of keys and return an iterator
    if(i==m.end())cout<<"no value found"<<endl;
    else
    cout<<endl<<(*i).first<<" "<<(*i).second<<endl;
    m.erase(5);//can take key value and erase it
    if(i!=m.end()) m.erase(i);//can also take iterator value and erase it
    cout<<endl<<"printing after erasing : "<<endl;
    print(m);
    m1.clear();
    cout<<endl<<"printing after clearing all elements of m1 map : "<<endl;
    print1(m1);
    return 0;
}
