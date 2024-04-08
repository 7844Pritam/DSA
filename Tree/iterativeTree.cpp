#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node *left;
        Node *right;
    
    public: 
       Node(int val)
       {
           data = val;
           left = NULL;
           right = NULL;
       }
};

Node* createTree()
{
    queue<Node*> q;
    Node *root, *p, *t;
    int x;
    cout << "Enter root: ";
    cin >> x;
    root=new Node(x);
    p = root;
    q.push(root);
   
    while(!q.empty())
    {
        p = q.front();
        q.pop();
        cout << "Enter Left child of : "<< p->data;
        cin>>x;
        if(x!=-1)
        {
            t = new Node(x);
            p->left = t;
            q.push(t);
        }

        cout << "Enter Right child of : "<< p->data;
        cin>>x;
        if(x!=-1)
        {
            t = new Node(x);
            p->right = t;
            q.push(t);
        }

    }
    return root;
}

void preOrder(Node *root)
{
    if(root)
    {
        cout << root->data<<" ";
        preOrder(root->left);
        preOrder(root->right);
    }
}

int postOrder(Node *root , int &count)
{
   
    if(root)
    {
        postOrder(root->left, count);
        postOrder(root->right,count);
        if(root->left == NULL && root->right==NULL)
        {
            count  = count + 1;
        }
        cout << root->data<<" ";
    }
    return count;
}

void inOrder(Node *root)
{
    if(root)
    {
        inOrder(root->left);
        cout << root->data<<" ";
        inOrder(root->right);
    }
}


void IterativePreorder(Node *root)
{
    stack<Node *>st;
   
    while(root || !st.empty())
    {
        if(root!=NULL)
        {
            cout<<root->data<<" ";
            st.push(root);
            root=root->left;
        }
        else
        {
            root=st.top();
            st.pop();
            root = root->right;
        }
    }
}

int IterativeInorder(Node *root)
{
      stack<Node *>st;
      int count = 0;

      while (root || !st.empty())
      {
          if (root != NULL)
          {
              st.push(root);
              root = root->left;
          }
          else
          {
              root = st.top();
              cout << root->data << " ";
              count = count + 1;
              st.pop();
              root = root->right;
          }

    }
    return count;
}        



vector<vector<int>> BFS(Node* root)
{
    vector<vector<int>> vec;
    queue<Node*> q;
    q.push(root);
   
    while(!q.empty())
    {
        root = q.front();
        int n = q.size();
        vector<int> level;
        for (int i = 0;i<n;i++)
        {
            root = q.front();
            level.push_back(root->data);
            q.pop();

            if(root->left)
            {
                q.push(root->left);
            }

            if(root->right)
            {
                q.push(root->right);
            }
        }
        vec.push_back(level);
    }
    return vec;
}



int main()
{
    Node *root=createTree();
    vector < vector<int>> ans;

   ans =  BFS(root);
   for(int i = 0; i<ans.size(); i++)
   {
       for (int j = 0; j < ans[i].size(); j++)
       {
           cout << ans[i][j];
       }
       cout << endl;
   }  
           
    return 0;
}