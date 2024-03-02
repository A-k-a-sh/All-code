#include<bits/stdc++.h>
#include<stdio.h>
#include<bitset>
#include<climits>
#include<conio.h>
#define f(i,s,n) for(long i=s;i<n;i++)
#define fr(i,s,n) for(int i=s;i>=n;i--)
using namespace std;
using ll= long long;
using ch=char;
void printvec(vector<pair<int,int>>&a)
{
    cout<<"size : "<<a.size()<<endl;
    for(int i=0;i<a.size();i++)cout<<a[i].first<<" "<<a[i].second<<endl;

}
int main()
{
    //ios_base::sync_with_stdio(false);cin.tie(NULL);
    vector<pair<int,int>>v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        v.push_back({a,b});
    }
    printvec(v);


    return 0;
}

