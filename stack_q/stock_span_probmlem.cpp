#include <bits/stdc++.h>
using namespace std;

void stockSpan(int arr[],int size){
    stack <pair<int,int>> s;
    vector <int>v;
    for (int i = 0; i < size; i++)
    {
        if(s.empty()){
            v.push_back(-1);

        }
        else if(!s.empty() && s.top().first > arr[i]){
            v.push_back(s.top().second);
        }
        else if(!s.empty() && s.top().first < arr[i]){
            while (!s.empty() && s.top().first <arr[i])
            {
                s.pop();
            }
            if (s.empty())
            {
                v.push_back(-1);
            }
            else{
                v.push_back(s.top().second);
            }
        }
        s.push({arr[i],i});
    }
    for (int i = 0; i < size; i++)
    {
        cout<<i - v[i]<<" ";
    }
    
    
}
int main(){
    int input_ar[] = {100,80,60,70,60,75,85};
    int size = sizeof(input_ar) / sizeof(input_ar[0]);
    stockSpan(input_ar, size);
    return 0;
}