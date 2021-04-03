#include <bits/stdc++.h>
#include <vector>
using namespace std;

//nearest smaller to right 
// We entering size inteast of -1 
vector <int> NSR(vector <int>&arr, int size){
    stack <pair<int,int>> s;
    vector <int>m;
    for (int i =size-1; i >=0; i--)
    {
        if(s.empty()){
            m.push_back(size);
            }
        else if(!s.empty() && s.top().first < arr[i]){
         m.push_back(s.top().second);
        }
        else if(!s.empty() && s.top().first >= arr[i]){
            while (!s.empty() && s.top().first >= arr[i] )
            {
                s.pop();
            }
            if(s.empty()){
               m.push_back(size);
            }
            else{
                 m.push_back( s.top().second);
            }
        }
		 s.push({arr[i],i});
    }
     reverse(m.begin(), m.end());
  return m;
}

//nearest smaller to left
vector <int> NSL(vector <int>&arr, int size){
    stack <pair<int,int>> s;
    vector <int>m;
    for (int i =0; i <size; i++)
    {
        if(s.empty()){
            m.push_back(-1);
            }
        else if(!s.empty() && s.top().first < arr[i]){
         m.push_back(s.top().second);
        }
        else if(!s.empty() && s.top().first >= arr[i]){
            while (!s.empty() && s.top().first >= arr[i] )
            {
                s.pop();
            }
            if(s.empty()){
               m.push_back(-1);
            }
            else{
                 m.push_back(s.top().second);
            }
        }
		 s.push({arr[i],i});
    }
  return m;
}

int maxAreaHistogram(vector <int>&arr, int size){
      vector <int> NSRV,NSLV,res;
//index of nearest smaller right
    NSRV=NSR(arr,size);

     //index of nearest smaller left
    NSLV=NSL(arr,size);

    for (int i = 0; i < size; i++)
    {
        res.push_back((abs(NSRV[i]-NSLV[i])-1)*arr[i]);
    }
  return *max_element(res.begin(), res.end());
}

int main(){
    int a[] = {0,0,0,0};
    vector <int> r;
    int arr[4][4] = { {0,1,1,0},{1,1,1,1},{1,1,1,1},{1,1,0,0} };
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++){
        for (int j = 0; j < size; j++)
        {   arr[i][j] !=0?
            a[j] = arr[i][j] + a[j] : a[j]=0;
        }
        vector <int> temp(a, a + sizeof(a) / sizeof(int));
        r.push_back(maxAreaHistogram(temp,size));
    }
    cout<< *max_element(r.begin(), r.end())<<endl;
    return 0;
}