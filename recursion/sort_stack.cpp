#include <bits/stdc++.h>

void insert(std::stack<int>& s, int tempt){
    int ele;
    if(s.empty() || s.top() <= tempt){
        s.push(tempt);
        return;
    }
    else
    {
        ele = s.top();
        s.pop();
        insert(s,tempt);
        s.push(ele);
    }
}

void sort(std::stack<int>& s){
    if(s.empty()){
        return;
        };
    int tempt;
    tempt = s.top();
    s.pop();
    sort(s);  
    insert(s,tempt);
    }

void display(std::stack <int> s){
    if(s.empty()){
        return;
    }
    else{
        std::cout<<s.top()<<" ";
        s.pop();
        display(s);
    }
}
int main(){
    std::stack<int> s;
    s.push(2);
    s.push(7);
    s.push(0);
    s.push(5);
    s.push(4);

    sort(s);
    display(s);
    return 0;
}