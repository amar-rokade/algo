#include <bits/stdc++.h>
using namespace std;

stack <int>s;
int minele;

void push(int a){
    if(s.empty() ){
        s.push(a);
        minele = a;
    }
    else {
        if(minele > a){
        s.push(2 * a - minele);
        minele = a;
        }
        else{ 
            s.push(a);
        }
    }
};

void pop(){
    if(s.empty()){
        return ;
    }
    else {
        if(s.top()>= minele){
             s.pop();
        }
        else{
            minele = 2 * minele - s.top();
            s.pop();
        };
        }
    }

int top(){
    if(s.empty()){
        return -1;
    }
    else{
        if(s.top()>= minele){
            return s.top();
        }
        else{
            return minele;
        }
    }
}
int getMin(){
    if(s.empty()){
        return -1;
    }
    else{
        return minele;
    }
}
int main(){
    push(18);
    push(24);
    push(15);
    push(17);
    push(20);
    cout<<getMin()<<endl;
    return 0;
}