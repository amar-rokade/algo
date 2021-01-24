#include <iostream>
#include <iomanip>
using namespace std;


int numRotated(int *arr,int size){
    int start = 0, min,mid,pre,next;
    int end = size -1;
    while(start <= end){
        // cout<<"start :"<<start<<"  end :"<< end<<endl;
         mid = start + ((end - start) / 2);           //mid index
         pre =(mid + size - 1) % size ;             //previous index 
         next = (mid + 1) % size;  
        cout<<"pre : "<<pre<<" mid :"<<mid<<" next :"<<next<<endl;                 //next next index 
        if(arr[start]>= arr[mid] && arr[end] >=arr[mid] ){
            
            return (size-min);
        }
        else if (arr[start] <= arr[mid]){
            // end = pre;
             start=mid;
        }
        else if(arr[mid] <= arr[end] ){
            // start=next;
            end = pre;
        }
        
    }
   
    return -1;
}


int main(){
    int size;

    cin>>size; //size input 

    int arr[size];

    //array element input 
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int ans;
    ans = numRotated(arr,size);
    cout<< ans;
    return 0;
}