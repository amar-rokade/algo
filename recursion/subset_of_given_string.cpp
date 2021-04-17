#include <bits/stdc++.h>

void printSubset(std::string is, std::string os){
    if(is.length()==0){
        std::cout<<os<<" ";
        return;
    }
    std::string os1,os2;
    os1 = os;
    os2 = os;
    os1.push_back(is[0]);
    is.erase(is.begin()+0);
    printSubset(is,os1);
    printSubset(is,os2);

}
int main(){
    std::string is,os="";
    std::cin>>is;

    printSubset(is,os);
    std::cout<<"\n";
    return 0;
}