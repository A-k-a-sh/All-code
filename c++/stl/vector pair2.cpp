#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#include<stdio.h>
#include<string.h>
#include<math.h>
void print(vector<pair<string ,int>>&v)
{
    cout<<endl;
    for(auto &p:v)cout<<p.first<<" " <<p.second<<endl;
}

int main()
{
   vector<pair<int ,int>>v;
   int n;
   cin>>n;
   while(n--){
    int a,b;
    cin>>a>>b;
    v.emplace_back(a,b);
   }
   for(pair<int,int> &p:v)cout<<p.first<<" "<<p.second<<endl;
   vector<pair<string ,int>>vv;
   cout<<endl;
   int nn;
   cin>>nn;
   while(nn--){
    string s;int a;
    cin>>s>>a;
    vv.emplace_back(s,a);
   }
   print(vv);
       return 0;
}
