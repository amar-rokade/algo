#include <iostream>
#include <vector>
using namespace std;

void genrateParantheses(int op,int cl,string s){
    if(op==0 && cl==0){
        cout<<s<<endl;
        return;
    }
    else if(op ==0){
        s.push_back(')');
        cl--;
        genrateParantheses(op,cl,s);
    }
    else if(op==cl){
        s.push_back('(');
        op--;
        genrateParantheses(op,cl,s);
    }
    else if(cl > op){
        
        int temp = op;
        string stemp = s;
        s.push_back('(');
        op--;
        genrateParantheses(op,cl,s);
        stemp.push_back(')');
        cl--;
        genrateParantheses(temp,cl,stemp);
    }
    
}

int main(){
    vector <string> v;
    string s="";
    int n,op,cl;
    cin>>n;
    op=cl=n;
    genrateParantheses(op,cl,s);
    return 0;
}