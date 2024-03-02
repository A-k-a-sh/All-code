#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
#define vec vector<int>
#define vecl vector<ll>
#define nn "\n"
#define f(i, s, e) for(int i = s; i < e; i++)
#define fr(i, e , s) for(int i = e; i >= s; i--)
const int N = 10e5 + 10;
bool vis[N];
int level[N];

class Node
{
    public:
        int data;
        Node* left;
        Node* right;
        Node(int data)
        {
            this -> data = data;
            left = right = NULL;
        }
};


void bfs(Node* root)
{
    queue<Node*>q;
    q.push(root);
    while(!q.empty())
    {
        Node* curr = q.front();
        q.pop();
        cout << curr -> data << " ";
        Node* child1 = curr -> left;
        Node* child2 = curr -> right;
        if(child1 != NULL)
        {
            q.push(child1);
            level[child1 -> data] = level[curr -> data] + 1;
        }

        if(child2 != NULL)
        {
            q.push(child2);
        
            level[child2 -> data] = level[curr -> data] + 1;
        }
        
        
    }
}

void buildtree_queue(Node* &root)
{
    Node* temp ;
    queue<Node*>q;
    int d;
    cout << "Enter root: ";
    cin >> d;
    temp = new Node(d);
    root = temp;
    q.push(temp);
    while(!q.empty())
    {
        Node* curr = q.front();
        q.pop();
        int c1 , c2;
        cout << "Enter left and right child of " << curr -> data << ": ";
        cin >> c1 >> c2;
        if(c1 != -1)
        {
            curr -> left = new Node(c1);
            q.push(curr -> left);
        }
        if(c2 != -1)
        {
            curr -> right = new Node(c2);
            q.push(curr -> right);
        }
    }

    
}

Node* buildtree(Node* root)
{
    int d;
    cin >> d;
    root = new Node(d);
    if(d == -1)
    {
        return NULL;
    }
    root -> left = buildtree(root -> left);
    root -> right = buildtree(root -> right);
    return root;

}

void dfs(Node* root)
{
    if(root == NULL)
    {
        return;
    }
    //cout << root -> data << " "; // preorder = dfs
    dfs(root -> left );
    cout << root -> data << " "; // inorder
    dfs(root -> right );
    //cout << root -> data << " "; // postorder
}

void solve()
{
    Node* root = NULL;
    //root = buildtree(root);
    buildtree_queue(root);
    bfs(root);
    //dfs(root);
    for(int i = 1 ; i <= 12 ; i++)
    {
        cout << "level of " << i << " :" << level[i] << nn; 
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
   ss/tree.png
            1
           / \
          2   3
        /  \
       4    5
        
1 2 4 -1 -1 5 -1 -1 3 -1 -1


btree.png

1 10 3 12 -1 -1 8 -1 -1 -1 4 7 6 -1 -1 -1 9 -1 2 -1 -1

level order input:
1 10 4 3 -1 7 9 12 8 6 -1 -1 2 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1

*/


Output:

Enter root: 1
Enter left and right child of 1: 10 4
Enter left and right child of 10: 3 -1
Enter left and right child of 4: 7 9
Enter left and right child of 3: 12 8
Enter left and right child of 7: 6 -1
Enter left and right child of 9: -1 2
Enter left and right child of 12: -1 -1
Enter left and right child of 8: -1 -1
Enter left and right child of 6: -1 -1
Enter left and right child of 2: -1 -1
1 10 4 3 7 9 12 8 6 2

level of 1 :0
level of 2 :3
level of 3 :2
level of 4 :1
level of 5 :0
level of 6 :3
level of 7 :2
level of 8 :3
level of 9 :2
level of 10 :1
level of 11 :0
level of 12 :3
