#include <iostream>
using namespace std;

int findNum(int *arr, int num,int size){

    // declare index of binary search array 
    int start=0; int end=size-1;
    int res=-1;
    while (start <= end) //base  checking 
    {
        int c ; 

        c = start +  (end - start)/2; //find middle  
        if(num == arr[c] )   // added extra condition for first occurance
        {    res = c;
        
             end =c-1;  // for first occurance
             //start = c+1; // for last occurance
           
        } 
        else if(arr[c]>=num){
            //start = c + 1 ; //decending order array 
            end = c -1 ;  // asending  order array
        }
         else 
        {
            start = c + 1 ; //asending order array 
            //end = c - 1;   // decending order array 
        }
    }

    return res;
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