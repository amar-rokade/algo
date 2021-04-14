#include <bits/stdc++.h>

void inser(std::vector<int>& arr, int tempt){

}
void sort(std::vector<int>& arr){
    if(arr.empty()){
        return;
        }
    int tempt;
    tempt = arr[arr.size()-1];
    arr.pop_back();
    sort(arr);  
    insert(arr,tempt);
    }
int main(){
    std::vector<int> v = {2,7, 0,5,4,3,1};