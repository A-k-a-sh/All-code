 #include<bits/stdc++.h>
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
        Node* left;
        Node* right;
        Node(int data)
        {
            this -> data = data;
            left = right = NULL;
        }
};

bool search(Node* root , int a)
{
    if(root == NULL)
    {
        return false;
    }
    if(root -> data == a)
    {
        return true;
    }
    if(root -> data > a)
    {
        return search(root -> left , a);
    }
    else
    {
        return search(root -> right , a);
    }
}

void maxval(Node* root)
{
    while(root -> right != NULL)
    {
        root = root -> right;
    }
    cout << "Max val : " << root -> data << nn;
}

void minval(Node* root)
{
    Node* temp = root;
    while(root -> left != NULL)
    {
        root = root -> left;
    }
    cout << "Min val: " << root -> data << nn;
    maxval(temp);
}

void traverse(Node* root)
{
    if(root == NULL)
    {
        return;
    }
    //cout << root -> data << " "; // preorder = dfs
    traverse(root -> left );
    cout << root -> data << " "; // inorder
    traverse(root -> right );
    //cout << root -> data << " "; // postorder
}

Node* insertIntoBst(Node* root , int data)
{
    if(root == NULL)
    {
        Node* root = new Node(data);
        return root;
    }
    if(data > root -> data)
    {
        root -> right = insertIntoBst(root -> right , data);
    }
    else
    {
        root -> left = insertIntoBst(root -> left , data);
    }

    return root;

}

void takeinput(Node* &root)
{
    int data;
    cin >> data;
    while(data != -1)
    {
        root = insertIntoBst(root , data);
        //cout << root -> data << nn;
        cin >> data;
    }
}


Node* deleteNode(Node* &root , int val)
{

    if(root == NULL)
    {
        return root;
    }
    if(root -> data < val)
    {
        root -> right = deleteNode(root -> right , val);
        return root;
    }
    else if(root -> data >= val)
    {
        root -> left = deleteNode(root -> left , val);
        return root;
    }
    return root;

}

void afterinsert(Node* &root , int d)
{
    root = insertIntoBst(root , d);
}

void solve()
{

    Node* root = NULL;
    takeinput(root);

    traverse(root);

    cout << nn;

    int d;

    cout << "Enter data to add: " ;

    cin >> d;
    afterinsert(root , d);

    traverse(root);
    cout << nn;

    minval(root);
    cout << nn;

    int a;
    cout << "Enter value to seach: ";
    cin >> a;
    if(search(root , a)) cout << "Prsent" << nn;
    else cout << "Not present" << nn;

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

10 8 21 7 27 5 4 3 -1

50 30 70 20 40 60 80 -1

*/

Output: 
10 8 21 7 27 5 4 3 -1
3 4 5 7 8 10 21 27 
Enter data to add: 99
3 4 5 7 8 10 21 27 99 
Min val: 3
Max val : 99

Enter value to seach: 7
Prsent
