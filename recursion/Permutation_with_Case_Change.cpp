#include <iostream>
using namespace std;

void printComb(string s, string out){
    string out1=out;
    if(s.length()==0){
      cout<<out<<endl;
        return;
    };
    if(isdigit(s[0])){
        out.push_back(s[0]);
        s.erase(s.begin()+0);
        printComb(s,out);
    }
    else{
        out1.push_back(toupper(s[0]));
        out.push_back(s[0]);
        s.erase(s.begin()+0);
        printComb(s,out1);
        printComb(s,out);
    }
}

int main(){
    string s,out="";
    cin>>s;
  
    printComb(s,out);
    return 0;
}