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

class Node
{
    public:
        int data;
        Node* right;
        Node* left;
    Node(int data)
    {
        this -> data = data;
        right = left = NULL;
    }
};

Node* buildtree(Node* root)
{
    //cout << "Enter Data: ";
    int data;
    cin >> data;
    root = new Node(data);
    if(data == -1)
    {
        return NULL;
    }
    //cout << "For left tree of " << data << nn;
    root -> left = buildtree(root -> left);
    //cout << "For right tree of " << data << nn;
    root -> right = buildtree(root -> right);
    return root;
}

void inorder_dfs(Node* root)
{
    if(root == NULL)
    {
        return;
    }
    //cout << root -> data << " "; // preorder = dfs
    inorder_dfs(root -> left );
    //cout << root -> data << " "; // inorder
    inorder_dfs(root -> right );
    cout << root -> data << " "; // postorder
}

void solve()
{
    Node* root = NULL;
    root = buildtree(root);

    inorder_dfs(root);
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

            1
           / \
          2   3
        /  \
       4    5
        
  1 2 4 -1 -1 5 -1 -1 3 -1 -1
*/


Output:
1 2 4 -1 -1 5 -1 -1 3 -1 -1
4 5 2 3 1
