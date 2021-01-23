#include <iostream>
#include <iomanip>
using namespace std;

int findNum(int *arr, int num,int size){

    // declare index of binary search array 
    int start=0, end=size-1;
    while (start <= end) //base  checking 
    {
        int c ; 

        c = start +  (end - start)/2; //find middle  
        if(num == arr[c])
        {     
             return c;
        }
        else if(arr[c]>=num){
            end = c - 1 ;
        }
         else 
        {
            start = c + 1;
        }
    }

    return -1;
}



int main(){
    int size, num;

    cin>>size; //size input 

    int arr[size];

    //array element input 
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    //search num input 
    cin>>num;

    cout<< findNum(arr,num,size);
    return 0;
}