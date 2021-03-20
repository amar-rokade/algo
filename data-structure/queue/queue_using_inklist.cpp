#include <iostream>

struct node{
    int data;
    struct node * next;
};

struct node *front=0,*real=0;
void enqueue(int x){
    struct node *newNode;
    newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = x;
    newNode->next=0;
    if (front==0&&real==0)
    {
        front=real=newNode;
    }
    else
    {
        real->next=newNode;
        real=newNode;
    }  
}

void disply(){
    struct node * temp;
    if(front==0 && real==0){
        std::cout<<"empty.\n";
    }
    else{
        temp = front;
        while (temp!=0)
        {
            std::cout<<temp->data<<"\n";
            temp=temp->next;
        }
    }
}

void dequeue(){
    struct node *temp;
    temp =front;
    if(front==0 && real==0){
        std::cout<<"empty\n";
    }
    else{
        front = front->next;
        free(temp);
    }
}

void peek(){
    if(front==0 && real==0){
        std::cout<<"empty\n";
    }
    else{
        std::cout<<front->data<<"\n";
    }
}

int main(){
    enqueue(1);
    enqueue(13);
    enqueue(5);
    enqueue(1253);
    enqueue(131);
    disply();
    dequeue();
    dequeue();
    disply();
    return 0;
}