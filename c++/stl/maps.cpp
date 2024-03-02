#include<bits/stdc++.h>
using namespace std;
void print1(map<string,int>&a)
{
    cout<<"size is :"<<a.size()<<endl;
    for(auto &p:a)cout<<p.first<<" "<<p.second<<endl;
}
void print(map<int,string>&a)
{
    for(auto &p:a)cout<<p.first<<" "<<p.second<<endl;
}
int main()
{
    map<int ,string>m;//output ordered ; the key can't be twice but the vlaue can
    // m[1]="abc";
    // m[5]="bcd";
    // m[5]="cde";//this way of input, last one get priority
    // m.insert({4,"def"});//in insert, for same value first one get priority
    // m.insert({4,"ded"});
    // for(auto it=m.begin();it!=m.end();it++)cout<<(it->first)<<" "<<(it->second)<<"\n";
    // cout<<"\n";
    // cout<<"another way:"<<endl;
    // for(auto &v:m)cout<<v.first<<" "<<v.second<<endl;
     cout<<endl;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        string s;
        cin>>a>>s;
        m[a]=s;//for same key, last one get priority
    }
    cout<<endl;
    //cout<<m[5]<<" "<<m[3]<<endl;//print value of keys 5 and 3
    for(auto v:m)cout<<v.first<<" "<<v.second<<endl;

    map<string ,int >m1;
    m1["abc"]=1;
    m1["beg"]=5;
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
