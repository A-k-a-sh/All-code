//#include<bits/stdc++.h>
#include<vector>
#include<iostream>
#include<fstream>
using namespace std;
using ll = long long int;
#define vec vector<int>
#define vecl vector<ll>
#define nn "\n"
#define f(i, s, e) for(int i = s; i < e; i++)
#define fr(i, e , s) for(int i = e; i >= s; i--)
const int N = 10e3 + 1;
vector<int>graph[N]; //highest N = 10^3 or 10^4
vector< pair< int, int >> graph2[N]; // N can be <= 10^5  space: O (N + M)
void print_graph(int m, vector<int> graph[N])
{
    int c = 0;
    cout << nn << nn;
    for(int i = 1; i <= m; i++)
    {
        if(!graph[i].empty())
        {
            cout << i << " -> ";
            for(auto j : graph[i] )cout << j << " ";
            cout << nn;
        }
    }
    cout << nn; //<< c << nn;
    return;
}

void print_weighted_graph(vector< pair< int, int >> graph2[N], int m)
{
    cout << nn << nn;
    for(int i = 1 ; i <= m ;i++)
    {
        if(!graph2[i].empty())
        {
            cout << i << " -> ";
            for(auto j : graph2[i]) cout << "(" << j.first << " " << j.second << ")" << " ";
            cout << nn;
        }
    }
    cout << nn;
    return;
}
void weighted_graph()
{
    int n, m;
    cin >> n >> m;
    for(int i = 0 ; i < m ; i++)
    {
        int v1, v2, wt;
        cin >> v1 >> v2 >> wt;
        graph2[v1].push_back({v2,wt});
        graph2[v2].push_back({v1,wt});
    }
    print_weighted_graph(graph2, n);
    return;
}
void Graph()
{
    ifstream inputFile("input.txt");
    if (!inputFile.is_open()) {
        cout << "Error opening the file." << endl;
        return ; // Exit the program with an error code
    }
    int n, m;
    inputFile >> n >> m;
    for(int i = 0; i < m; i++)
    {
        int v1, v2;
        inputFile >> v1 >> v2;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }
    print_graph(n, graph);
    return;
}
void solve()
{
    Graph();
    weighted_graph();
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
3 2
3 4
4 6
3 6
2 6
1 5
5 6
3 5

*/

/*
Weighted graph
6 9
1 3 4
3 2 5
3 4 7
4 6 10
3 6 9
2 6 8
1 5 6
5 6 11
3 5 8


*/

Ouptput:

1 -> 2 
2 -> 1 3 4 
3 -> 2 5 
4 -> 2 
5 -> 3 
6 -> 7 
7 -> 6 

6 9
1 3 4
3 2 5
3 4 7
4 6 10
3 6 9
2 6 8
1 5 6
5 6 11
3 5 8


1 -> (3 4) (5 6) 
2 -> (3 5) (6 8) 
3 -> (1 4) (2 5) (4 7) (6 9) (5 8) 
4 -> (3 7) (6 10) 
5 -> (1 6) (6 11) (3 8) 
6 -> (4 10) (3 9) (2 8) (5 11) 
