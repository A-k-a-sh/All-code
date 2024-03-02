//#include<bits/stdc++.h>
#include<vector>
#include<iostream>
#include<queue>
using namespace std;
using ll = long long int;
#define vec vector<int>
#define vecl vector<ll>
#define nn "\n"
#define f(i, s, e) for(int i = s; i < e; i++)
#define fr(i, e , s) for(int i = e; i >= s; i--)
const int N = 1e5 + 10;
vector<int> graph[N];
bool vis[N];
int level[N];

void bfs(int vertex) // TC : O(V + E)
{
    queue<int> q;
    q.push(vertex);
    vis[vertex] = true;
    while(!q.empty())
    {
        int curr_vertex = q.front();
        cout << curr_vertex << " ";
        q.pop();
        for(auto child : graph[curr_vertex])
        {
            if(!vis[child])
            {
                q.push(child);
                vis[child] = true;
                level[child] = level[curr_vertex] + 1;
            }
        }
    }
    cout << nn << nn;
}

void solve()
{
    int n , m;
    cin >> n;
    cin >> m;
    for(int i = 1 ; i <= m ; i++)
    {
        int v1 , v2;
        cin >> v1 >> v2;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }
    bfs(1);
    for(int i = 1 ; i <= n ; i++)
    {
        cout << i << " : " << level[i] << nn;
    }
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

/Users/akash/SS/tree.png

13 12
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

*/
