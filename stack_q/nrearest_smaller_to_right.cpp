#include <bits/stdc++.h>
using namespace std;

void printNGR(int arr[], int size){
    stack <int> s;
    unordered_map<int,int>m;
    for (int i = size-1; i >=0; i--)
    {
        if(s.empty()){
            m[arr[i]] = -1;
             s.top();
            }
        else if(!s.empty() && s.top() < arr[i]){
          m[arr[i]] = s.top();
        }
        else if(!s.empty() && s.top() >= arr[i]){
            while (!s.empty() && s.top() >= arr[i] )
            {
                s.pop();
            }
            if(s.empty()){
                m[arr[i]] =-1;
            }
            else{
                 m[arr[i]] = s.top();
            }
        }
		 s.push(arr[i]);
    }
    
	for (int i = 0; i < size; i++)
		cout << arr[i] << " ---> "
			<< m[arr[i]] << endl;
}
// Driver Code
int main()
{
	int arr[] = { 11, 13, 21, 3,12,56,76,9,45 };
	int n = sizeof(arr) / sizeof(arr[0]);

	// Function call
	printNGR(arr, n);
	return 0;
}
