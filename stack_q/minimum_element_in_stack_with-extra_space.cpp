#include <bits/stdc++.h>
using namespace std;

stack <int>s;
stack <int>ss;

void push(int a){
    s.push(a);
    if(ss.empty() || ss.top() >= a ){
        ss.push(a);
    }
};
int pop(){
    if(s.empty()){
        return -1;
    }
    else {
        int top = s.top();
        s.pop();

        if(top == ss.top()){
        ss.pop();
        }
     return top;
    }
   
};
int getMin(){
    if(ss.empty()){
        return -1;
    }
    else{
        return ss.top();
    }
}
int main(){
    push(18);
    push(24);
    push(15);
    push(17);
    push(20);
    pop();
    pop();
    pop();
    cout<<getMin()<<endl;
    return 0;
}