#include<bits/stdc++.h>
#define nn "\n"
using namespace std;
void sieve(int n,int a)
{
    vector<int >mark;//vector<int>mark={1,1,0,0};
    vector<int>prime;
    mark.assign({1,1,0,0});
    int limit=sqrt(n)+2;
    for(int i=4;i<=n;i++){
        if(i%2)mark.push_back(0);
        else mark.push_back(1);
    }
    prime.push_back(2);
    for(int i=3;i<=n;i+=2){
        if(!mark[i]){
            prime.push_back(i);
            if(i<=limit){
                for(int j=i*i;j<=n;j+=i*2)mark[j]=1;
            }
        }
    }
    if(a==1){
        for(auto x:prime)cout<<x<<" ";
        cout<<nn;
    }
    else {
        cout<<"Enter '0' to exit!!"<<nn;
        while(1){
            cout<<"Enter a number between 1 to " << n <<": ";
            int c;
            cin>>c;
            if(c==0)break;
            if(mark[c])cout<<"Not prime"<<nn;
            else cout<<"Prime"<<nn;
        }
    }
}
int main()
{
    cout<<"Enter n: ";
    int n;
    cin>>n;
    cout<<"1.Prime number from 1 to " << n <<nn;
    cout<<"2.nth prime number"<<nn;
    cout<<"Enter choice: ";
    int a;
    cin>>a;
    sieve(n,a);
    return 0;
}



Output:

Enter n: 20
1.Prime number from 1 to 20
2.nth prime number
Enter choice: 2
Enter '0' to exit!!
Enter a number between 1 to 20: 
17
Prime
Enter a number between 1 to 20: 
15
Not prime
Enter a number between 1 to 20: 
19
Prime
Enter a number between 1 to 20: 
0
