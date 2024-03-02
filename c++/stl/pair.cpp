#include<bits/stdc++.h>
#include<stdio.h>
#include<bitset>
#include<climits>
#define f(i,s,n) for(long i=s;i<n;i++)
#define fr(i,s,n) for(int i=s;i>=n;i--)
using namespace std;
using ll= long long;
using ch=char;
int main()
{
    //ios_base::sync_with_stdio(false);cin.tie(NULL);
    /*pair<int,string>p;
    p=make_pair(5,"my name is akash");
    p={4,"akash"};
    pair<int ,string>p1=p;
    cout<<p1.first<<" " <<p1.second<<endl;*/
    pair<int ,int>p[4];
    for(int i=0;i<4;i++)cin>>p[i].first>>p[i].second;
    swap(p[0].first,p[2].second);
    cout<<"output:"<<endl;
    for(int i=0;i<4;i++)cout<<p[i].first<<" "<<p[i].second<<endl;


    return 0;
}
