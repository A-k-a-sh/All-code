#include<bits/stdc++.h>
using namespace std;
#define nn "\n"
#define co cout<<
using ll=long long int;
void solve(int t)
{
    int n,a,q;
    cin>>n>>a>>q;
    int dif=n-a;
    string s;
    cin>>s;
    int plus=0,minus=0;
    int st_plus=0,c=0,track=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='+'){
            plus++;
            c++;
            if(c==dif){
                track=1;
                break;
            }

        }
        if(s[i]=='-'){
            minus++;
            c--;
        }
        if(i+1==plus)st_plus++;
        
    }

    if(track)co "YES"<<nn;
    else if(dif<=plus)co "MAYBE"<<nn;
    else co "NO"<<nn;
}
int main()
{
    //ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)solve(i);
    return 0;
}