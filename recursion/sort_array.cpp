#include <bits/stdc++.h>

void insert(std::vector<int>& arr, int tempt){
    int ele;
    if(arr.empty() || arr[arr.size()-1]<=tempt){
        arr.push_back(tempt);
        return;
    }
    else
    {
        ele = arr[arr.size()-1];
        arr.pop_back();
        insert(arr,tempt);
        arr.push_back(ele);
    }
}
void sort(std::vector<int>& arr){
    if(arr.empty()){
        return;
        };
    int tempt;
    tempt = arr[arr.size()-1];
    arr.pop_back();
    sort(arr);  
    insert(arr,tempt);
    }
int main(){
    std::vector<int> v = {2,7, 0,5,4,3,1, 54,7};
    sort(v);
    for (int i = 0; i < v.size(); i++)
    {
        std::cout<<v[i]<<" ";
    }
    
    return 0;
}