#include <bits/stdc++.h>



void midDelete(std::stack<int>& s,int mid){
    int tempt;
    if(s.empty()){
        return;
        }
    else{
        if(mid == 1){
            s.pop();
        }
        else{
            tempt = s.top();
            s.pop();
            mid--;
            midDelete(s,mid);
            s.push(tempt);
        }
    }
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
    s.push(10);
    int mid = int(s.size()/2) + 1;
    midDelete(s,mid);
    display(s);
    return 0;
}