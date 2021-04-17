#include <iostream>
#include <vector>
using namespace std;

void safeNum(vector <int> v, int idx, int k){
    if( v.size()==1){
       cout<<v[0]+1<<endl;
       return;
    };
    idx = (idx+k-1)%v.size();
    v.erase(v.begin() + idx);
    safeNum(v,idx,k);

}
int main(){
    vector <int> v;
    int n,k,idx=0;
    cin>>n>>k;
    for (int i = 0; i < n; i++)
    {
        v.push_back(i);
    }
    safeNum(v,idx,k);
    return 0;
}