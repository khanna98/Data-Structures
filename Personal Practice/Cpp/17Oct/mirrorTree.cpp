#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node *left;
    struct Node *right;
}*root;

class BinarySeachTree{
public:
    void insertNode(struct Node *ptr,int num){
        if(root==NULL){
            Node *newNode = new Node;
            newNode->data = num;
            newNode->left = NULL;
            newNode->right = NULL;
            root = newNode;
            cout<<root->data<<" is the root node"<<endl;
        }
        else{
            if(ptr->data > num){
                if(ptr->left!=NULL){
                    insertNode(ptr->left,num);
                }
                else{
                    Node *newNode = new Node;
                    newNode->data = num;
                    newNode->left = NULL;
                    newNode->right = NULL;
                    ptr->left = newNode;
                    cout<<newNode->data<<" is the left child of "<<ptr->data<<endl;
                }
            }
            else if(ptr->data < num){
                if(ptr->right!=NULL){
                    insertNode(ptr->right,num);
                }
                else{
                    Node *newNode = new Node;
                    newNode->data = num;
                    newNode->left = NULL;
                    newNode->right = NULL;
                    ptr->right = newNode;
                    cout<<newNode->data<<" is the right child of "<<ptr->data<<endl;
                }
            }
        }
    }
    void mirrorInsert(struct Node *ptr1,int num){
        if(root==NULL){
            Node *newNode = new Node;
            newNode->data = num;
            newNode->left = NULL;
            newNode->right = NULL;
            root = newNode;
            cout<<root->data<<" is the root node"<<endl;
        }
        else{
            if(ptr1->data > num){
               if(ptr1->right!=NULL){
                    mirrorInsert(ptr1->right,num);
                }
                else{
                    Node *newNode = new Node;
                    newNode->data = num;
                    newNode->left = NULL;
                    newNode->right = NULL;
                    ptr1->right = newNode;
                    cout<<newNode->data<<" is the right child of "<<ptr1->data<<endl;
                } 
            }
            else if(ptr1->data < num){
                if(ptr1->left!=NULL){
                    mirrorInsert(ptr1->left,num);
                }
                else{
                    Node *newNode = new Node;
                    newNode->data = num;
                    newNode->left = NULL;
                    newNode->right = NULL;
                    ptr1->left = newNode;
                    cout<<newNode->data<<" is the left child of "<<ptr1->data<<endl;
                }
            }
        }
    }
};

int main(void){
    BinarySeachTree bst;
    root = NULL;
    int n,num;
    int *a;
    cout<<"Enter the size of the Tree : ";
    cin>>n;
    cout<<"Enter the elements of the tree : "<<endl;
    a = new int[n];
    for(int i=0;i<n;i++){
        cin>>num;
        a[i] = num;
        bst.insertNode(root,num);
    }
    root = NULL;
    cout<<"\nNow creating a Mirror Tree : \n"<<endl;
    for(int i=0;i<n;i++){
        bst.mirrorInsert(root,a[i]);        
    }
    // for(int i=0;i<n;i++){
    //     cout<<a[i]<<" ";
    // }
    // cout<<endl;
    return 0;
}