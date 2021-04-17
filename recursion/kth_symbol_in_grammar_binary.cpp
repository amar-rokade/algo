#include <bits/stdc++.h>
#include <math.h>

int getSyb(int n, int k){
    int mid = int (pow(2,n-1)/2) + 1;
    if(n==1 && k ==1){
        return 0;
    }
    else if(k < mid){
        return getSyb(n-1,k);
    }
    else
    {
        return !getSyb(n-1,k - int(pow(2,n-1)/2));
    }
    
}
int main(){
    int n,k;
    std::cin>>n>>k;
    std::cout<<getSyb(n,k)<<std::endl;
    return 0;
}