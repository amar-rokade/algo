#include <iostream>
using namespace std;

void printComb(string s, string out){
    string out1=out;
    if(s.length()==0){
        if(out.length()!=1){cout<<out<<endl;}
        return;
    };
    out1.push_back('_');
    out1.push_back(s[0]);
    s.erase(s.begin()+0);
    printComb(s,out1);
    printComb(s,out);


}

int main(){
    string s,out="";
    cin>>s;
    out.push_back(s[0]);
    s.erase(s.begin()+0);    
    printComb(s,out);
    return 0;
}