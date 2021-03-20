#include <iostream>
#define N 5

int queue[N];
int front = -1, real=-1;

void enqueue(int x){
    if(real == N-1){
        std::cout<<"overflow\n";
    }
    else if(front == -1 && real == -1){
            front=real=0;
            queue[real]=x;
    }
    else{
        real++;
        queue[real]=x;
    }
}

void dequeue(){
    if(front==-1 && real==-1){

    }
    else if(front==real){
        front=real=-1;
    }
    else{
        front++;
    }
}

void disply(){
    if(front==-1 && real == -1){
        std::cout<<"empty\n";

    }
    else
    {
        for(int i=front;i<real+1;i++){
         std::cout<<queue[i]<<"\n";
        }
    }
    
    
}
void peek(){
    if(front==-1 && real == -1){
        std::cout<<"empty\n";
    }
    else{
        std::cout<<queue[front]<<"\n";
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

