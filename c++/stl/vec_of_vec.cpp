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
void printvec(vector<int>&a)
{
    //cout<<"vector no: "<<i+1<<endl;
    cout<<"size : "<<a.size()<<endl;
    for(int i=0;i<a.size();i++)cout<<a[i]<<" ";
    cout<<"\n";

}
int main()
{
    //ios_base::sync_with_stdio(false);cin.tie(NULL);
    vector<vector<int>>v;
    int N;
    cin>>N;
    ////taking element input in vector:
    //*

    for(int i=0;i<N;i++){
        int n;
        cin>>n;
        vector<int>temp;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }
      //*/

    ///another way to take input:
    /*
    for(int i=0;i<N;i++){
        int n;
        cin>>n;
        v.push_back(vector<int>());
        for(int j=0;j<n;j++){
            int x;
            cin>>x;
            v[i].push_back(x);
        }
    }
      */
 f(i,0,v.size())
    printvec(v[i]);


    return 0;
}
