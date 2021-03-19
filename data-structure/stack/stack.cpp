#include<iostream>
using namespace std; 

class Stack{
    private :
     int arr[10];
     int top;
    public :
    Stack(){
        top = -1;
    };    //defualt constructor
        int push(int); //adding 
        int pop();     //removing
        int isEmpty();
        int isFull();
        void displayItems();
};

int Stack::push(int a){
    if(!isFull()){
        ++top;
        arr[top] = a;
        return a;
    }
    else return -1;
};

int Stack::pop(){
    if(!isEmpty()){
        --top;
        return arr[top]; 
    }
    else return -1;
}
int Stack::isEmpty(){
    if(top == -1){return 1;}
    else{ return 0;};
}

int Stack::isFull(){
    if(top == 9){return 1;}
    else{ return 0;};
}

void Stack::displayItems(){
    for(int i =0 ; i<=top;i++){
        std::cout<<arr[i]<<endl;
    }
}

int main() {
    Stack stk;
    stk.push(10);
    stk.displayItems();
    stk.displayItems();
    cout<<stk.isEmpty();
    return 0;
}

