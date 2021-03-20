#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node * left, *right;
};



//preorder function  ROOT -> LEFT -> RIGHT
void preorder(struct node * root){
    if(root==0){
        return;
    } 
    cout<<root->data<<"\n";
    preorder(root->left);
    preorder(root->right);
}

//inorder function  LEFT -> ROOT -> RIGHT
void inorder(struct node * root){
    if(root==0){
        return;
    }
    inorder(root->left); 
    cout<<root->data<<"\n";
    inorder(root->right);
}

//postorder function  LEFT-> RIGHT -> ROOT 
void postorder(struct node * root){
    if(root==0){
        return;
    }
    inorder(root->left); 
    inorder(root->right);
    cout<<root->data<<"\n";
  
}

//preorder function
void preorder(struct node * root){
    if(root==0){
        return;
    } 
    cout<<root->data<<"\n";
    preorder(root->left);
    preorder(root->right);
}


