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
void printvec(vector<int>&a,int i)
{
    cout<<"vector no: "<<i+1<<endl;
    cout<<"size : "<<a.size()<<endl;
    for(int i=0;i<a.size();i++)cout<<a[i]<<" ";
    cout<<"\n";

}
int main()
{
    //ios_base::sync_with_stdio(false);cin.tie(NULL);
    int N;
    cin>>N;
    vector<int >v[N];//there is n array
    for(int i=0;i<N;i++){
        int n;
        cin>>n;
        for(int j=0;j<n;j++){
            int x;
            cin>>x;
            v[i].push_back(x);
        }
    }
    for(int i=0;i<N;i++)
    printvec(v[i],i);


    return 0;
}
