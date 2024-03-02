//#include<bits/stdc++.h>
#include<vector>
#include<iostream>
using namespace std;
using ll = long long int;
#define vec vector<int>
#define vecl vector<ll>
#define nn "\n"
#define f(i, s, e) for(int i = s; i < e; i++)
#define fr(i, e , s) for(int i = e; i >= s; i--)
const int N = 1e3 + 1;
int graph[N][N];

void print_graph(int m, int graph[][N])
{
    int c = 0;
    cout << nn << nn;
    for(int i = 1; i < m; i++)
    {
        for(int j = 1; j < m; j++)
        {
            if(graph[i][j] == 1) {
                cout << i << " " << j;
                cout << nn;
                c++;
            }
        }
        
    }
    cout << nn << c << nn;
}

void solve()
{
    int n, m;
    cin >> n >> m;
    for(int i = 0; i < m; i++)
    {
        int v1, v2;
        cin >> v1 >> v2;
        graph[v1][v2] = 1;
        graph[v2][v1] = 1;
    }
    print_graph(m, graph);
    cout << nn;
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
