#include <iostream>
using namespace std;

void printBinry(int ones,int zeros,int n, string out){
    string out1;
    if(n==0){
        cout<<out<<endl;
        return;
    };
    if(ones > zeros){
        out1 = out;
        out.push_back('0');
        out1.push_back('1');
        n--;
        zeros++;
        printBinry(ones,zeros,n,out);
        ones++;
        zeros--;
        printBinry(ones,zeros,n,out1);
    }
    else{
      
        out.push_back('1');
        n--;
        ones++;
        printBinry(ones,zeros,n,out);
    }

}

int main(){
    string out="";
    int n,ones=0,zeros=0;
    cin>>n;
    printBinry(ones,zeros,n,out);
    return 0;
}