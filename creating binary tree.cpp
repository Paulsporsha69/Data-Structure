#include<iostream>
using namespace std;
class node{
    public :
int data;
node *left;
node *right;
node(int d)
{
    data=d;
    left =NULL;
    right =NULL;

}

};
node *buildtree()
{
    int d;
    cin>>d;
    if(d==-1)
    {
        return NULL;
    }

  node *root = new node(d);
    root->left=buildtree();
    root->right=buildtree();
    return root;
}
void traversepre(node *root)
{
    if(root==NULL)
    {
        return ;
    }
    cout<<root->data<<" ";
    traversepre(root->left);
    traversepre(root->right);

}
void traverseinorder(node *root)
{
    if(root==NULL)
    {
        return ;
    }

    traverseinorder(root->left);
    cout<<root->data<<" ";
    traverseinorder(root->right);

}

void traversepost(node *root)
{
    if(root==NULL)
    {
        return ;
    }
    traversepost(root->left);
    traversepost(root->right);
    cout<<root->data<<" ";
}

int height (node *root)
{
    if(root==NULL)return 0;
    int l=height(root->left);
    int r=height(root->right);
    return max(l,r)+1;
}

int main()
{
   node *root=buildtree();
   traversepre(root);
   cout<<endl;
   traverseinorder(root);
   cout<<endl;
   traversepost(root);
   cout<<endl;
   cout<<height(root);



}

/*
#include<iostream>
using namespace std;
class   Node
{
public :
    Node *lchild;
    Node *rchild;
    int data;

};
class Queue{
private;
int front;
int rear;
int size;
Node **q;
public :
    Queue()
    {
        front =rear=-1;
        size=10;
        q=new Node*[size];
    }
    Queue(int size)
    {
        front =rear=-1;
        this->size-=size;;q=new Node *[size];
        void enqueue(Node *x);
        Node *dequeue();
        int is


     4
    }
};*/




