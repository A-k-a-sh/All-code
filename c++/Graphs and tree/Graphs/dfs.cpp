//#include<bits/stdc++.h>
#include<vector>
#include<iostream>
#include <fstream>
using namespace std;
using ll = long long int;
#define vec vector<int>
#define vecl vector<ll>
#define nn "\n"
#define f(i, s, e) for(int i = s; i < e; i++)
#define fr(i, e , s) for(int i = e; i >= s; i--)
const int N = 1e3 + 1;
vector<int> graph[N];
bool vis[N];

void dfs(int vertex )
{
    cout << vertex << nn;
    if(vis[vertex]) return ;
    vis[vertex] = true;
    for(auto child : graph[vertex])
    {
        cout << "Par: " << vertex <<", child: " << child << nn;
        dfs(child);
    }
    //cout << nn;
}

void Graph()
{
    ifstream inputFile("input.txt");
    if (!inputFile.is_open()) {
        cout << "Error opening the file." << endl;
        return ; // Exit the program with an error code
    }
    int n , m;
    inputFile >> n >> m;
    for(int i = 0 ; i < m ; i++)
    {
        int v1 , v2;
        inputFile >> v1 >> v2;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }
    dfs(1);

    cout << nn << nn;

    //cout << vis[1] << " " << vis [2] << nn;
    
}

void solve()
{
    Graph();
    return;
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
input.txt:
6 9 
1 3
1 5
3 5
3 4
3 6
3 2
2 6
4 6
5 6

*/

Output:

1
Par: 1, child: 3
3
Par: 3, child: 1
1
Par: 3, child: 5
5
Par: 5, child: 1
1
Par: 5, child: 3
3
Par: 5, child: 6
6
Par: 6, child: 3
3
Par: 6, child: 2
2
Par: 2, child: 3
3
Par: 2, child: 6
6
Par: 6, child: 4
4
Par: 4, child: 3
3
Par: 4, child: 6
6
Par: 6, child: 5
5
Par: 3, child: 4
4
Par: 3, child: 6
6
Par: 3, child: 2
2
Par: 1, child: 5
5
