//#include<bits/stdc++.h>
#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;
using ll = long long int;
#define vec vector<int>
#define vecl vector<ll>
#define nn "\n"
#define f(i, s, e) for(int i = s; i < e; i++)
#define fr(i, e , s) for(int i = e; i >= s; i--)
const int N = 1e5 + 10;
vector<int>graph[N];
int par[N];

void dfs(int vertex , int parent = -1)
{
    par[vertex] = parent;
    for(auto child : graph[vertex])
    {
        if(child == parent) continue;
        dfs(child , vertex);
    }
}
vector<int> path(int node)
{
    vector<int> ans;
    while(node != -1)
    {
        ans.push_back(node);
        node = par[node];
    }
    reverse(ans.begin() , ans.end());
    return ans;
}
void solve()
{
    int n;
    cin >> n;
    for(int i = 0 ; i < n - 1; i++)
    {
        int v1 , v2;
        cin >> v1 >> v2;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }
    dfs(1);
    int node1 , node2;
    cin >> node1 >> node2;
    vec v1 = path(node1);
    vec v2 = path(node2);
    int lca = -1;
    for(int i = 0 ; ; i++)
    {
        if(v1[i] == v2[i])
        {
            lca = v1[i];
        }
        else break;
    }
    cout << "Lca : " << lca << nn;
}
int main()
{
    //ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;
    //cin >> t;i
    //while(t--)
    solve();
    return 0;
}



tree.png:
13
1 2
1 3
1 13
2 5
3 4
5 6
5 7
5 8
8 12
4 9
4 10
10 11


6 8
Output:
Lca : 5
