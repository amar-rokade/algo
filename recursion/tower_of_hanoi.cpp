#include <bits/stdc++.h>
#include <math.h>

void solve(int n,int s, int h, int d){
    if(n==1){
        std::cout<<n<<" disk move from "<<s<<" to "<<d<<std::endl;
        return;
    }
    solve(n-1,s,d,h);
    std::cout<<n<<" disk move from "<<s<<" to "<<d<<std::endl;
    solve(n-1,h,s,d);

}
int main(){
    //n num of plate , h= helper, d = destination, s = source 

    int n,s=1,h=2,d=3;
    std::cin>>n;
    solve(n, s, h, d);
    return 0;
}