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
    vector<int >v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<"printing vector elements in normal way"<<endl;
    printvec(v);
    cout<<endl;
    cout<<"printing vecotor element using iterator:"<<endl;
    vector<int>::iterator ii;
    for(ii=v.begin();ii!=v.end();ii++)cout<<(*ii)<<" ";
    cout<<endl;
    vector<pair<int ,int>>v2={{4,5},{7,15},{1,8},{9,10}};
    //printing vector pair element using iterator
    cout<<"printing vector pair elements using iterator:"<<endl;
    vector<pair<int,int>>::iterator i;
    for(i=v2.begin();i!=v2.end();i++)cout<<(*i).first<<" "<<(*i).second<<endl;
    cout<<"printing vector element using iterator in another way:"<<endl;
    for(i=v2.begin();i!=v2.end();i++)cout<<(i->first)<<" "<<(i->second)<<endl;
    cout<<endl;
  //(*it).first <=> (it->first)   //for pair
  
   cout<<endl<<endl<<"First vector printing using short code:"<<endl;
   for(auto &p:v){
    cout<<p<<" ";
   }
   cout<<endl<<"printing vector pair using short code:"<<endl;
   for(auto &p1:v2){
    cout<<p1.first<<" "<<p1.second<<endl;
   }


    return 0;
}

