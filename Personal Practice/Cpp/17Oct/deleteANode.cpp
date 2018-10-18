#include<iostream>
using namespace std;

struct node{
    int data;
    struct node *left;
    struct node *right;
}*root;

class BST{
public:
    void insertNode(struct node *ptr,int num){
        if(root == NULL){
            node *nn = new node;
            nn->data = num;
            nn->left = NULL;
            nn->right = NULL;
            root = nn;
            cout<<nn->data<<" is the root node."<<endl;
        }
        else{
            if(ptr->data > num){
                if(ptr->left != NULL){
                    insertNode(ptr->left,num);
                }
                else{
                    node *nn = new node;
                    nn->data = num;
                    nn->left = NULL;
                    nn->right = NULL;
                    ptr->left = nn;
                    cout<<nn->data<<" is the left child of "<<ptr->data;
                }
            }
        }
    }
}