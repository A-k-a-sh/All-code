#include<bits/stdc++.h>
#include<stdio.h>
#include<bitset>
#include<climits>
#define f(i,s,n) for(long i=s;i<n;i++)
#define fr(i,s,n) for(int i=s;i>=n;i--)
using namespace std;
using ll= long long;
using ch=char;
void printvec(vector<int>a)//using '&' as reference as not copying the vector
{
    cout<<"Size of array: "<<a.size()<<endl;
    for(int i=0;i<a.size();i++)cout<<a[i]<<" ";
    cout<<endl;
    a.push_back(485);
}
void printvec1(vector<string>&a)
{
    cout<<"Size of array: "<<a.size()<<endl;
    for(int i=0;i<a.size();i++)cout<<a[i]<<" ";
    cout<<endl;
    a.push_back("leen");

}
int main()
{
    //ios_base::sync_with_stdio(false);cin.tie(NULL);

    vector<int >v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    printvec(v);
    printvec(v);
    vector<string>a;
    int b;
    cin>>b;//here is a confusion
    cin.ignore();//now solved
    for(int i=0;i<b;i++){
        string s;
        cin>>s;
        a.push_back(s);
    }

    printvec1(a);
    printvec1(a);

    return 0;
}
