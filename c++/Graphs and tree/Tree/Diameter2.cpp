
////  Tree's diameter 
  /// Optimize method 0(n)

//#include<bits/stdc++.h>
#include<cstring>
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
vector< int > graph[N];
int depth[N]; //distance of a node from root node
int height[N]; // a node's height is the highest distance to leaf from root

void dfs(int vertex , int parent = 0)
{
    for(auto child : graph[vertex])
    {
        if(child == parent) continue;
        depth[child] = depth[vertex] + 1;
        dfs(child , vertex);
    }
}

void solve()
{
    int n;
    cin >> n;
    for(int i = 0 ; i < n - 1 ; i++) // n vertices and n - 1 edges in tree
    {
        int v1 , v2;
        cin >> v1 >> v2;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    } 
    dfs(1);
    int max_depth = 0;
    int max_node = -1;
    for(int i = 1 ; i <= n ; i++)
    {
        if(max_depth < depth[i])
        {
            max_depth = depth[i];
            max_node = i;
        }
        depth[i] = 0;
    }
    dfs(max_node);
    int diameter = *max_element(depth , depth + n);
    cout << "Diameter: " << diameter << nn;
}
int main()
{
    //ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;
    //cin >> t;
    //while(t--)
    solve();
    return 0;
}



/*

Users/akash/SS/tree.png

14
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
11 14

*/
