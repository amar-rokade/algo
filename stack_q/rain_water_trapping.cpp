#include  <iostream>
#include<bits/stdc++.h>
using namespace std;
int sum(int arr[], int n)
{
    int sum = 0; // initialize sum
 
    // Iterate through all elements
    // and add them to sum
    for (int i = 0; i < n; i++)
    sum += arr[i];
 
    return sum;
}
int main(){
    int v[] ={3,0,0,2,0,4};
    int size = sizeof(v)/sizeof(v[0]);
    int mxL[size],mxR[size];
    mxL[0]=v[0];
    for (int i = 1; i < size; i++)
    {
        /* code */
        mxL[i] = max(mxL[i-1],v[i]);
    }
    mxR[size-1] = v[size-1];
    for (int i = size-2; i >=0; i--)
    {
        /* code */
        mxR[i] = max(mxR[i+1],v[i]);
    }
    int water[size];
    for (int i = 0; i < size; i++)
    {
        /* code */
        water[i] = min(mxL[i],mxR[i]) - v[i];
    }
    cout<<sum(water, size)<<endl;

    return 0 ;
}