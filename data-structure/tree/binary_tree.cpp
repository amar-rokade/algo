#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node * left, *right;
};

struct node * create(){
    int x;
    struct node * newNode;
    newNode = (struct node *) malloc(sizeof(struct node));
    cout<<"enter the data (-1 for no node): ";
    cin>>x;
    if(x== -1){
        return 0;  
    }
    newNode->data = x;
    cout<<"enter the left child of "<<x<<" : ";
    newNode->left=create();
    cout<<"enter the right child of "<<x<<" : ";
    newNode->right=create();
    return newNode;
}

int main(){
    struct node * root=0;
    root = create();
    cout<<root->right->data;
    return 0;
 
}

