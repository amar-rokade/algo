
#include <bits/stdc++.h>

using namespace std;

//start from first solution
void printNGE(int arr[], int n)
{
	stack<int> s;
	unordered_map<int, int> mp;

	s.push(arr[0]);

	for (int i = 1; i < n; i++)
	{
		if (s.empty()) {
			s.push(arr[i]);
			continue;
		}
		while (s.empty() == false
			&& s.top() < arr[i])
		{
			mp[s.top()] = arr[i];
            cout<<s.top()<<"\n";
			s.pop();
		}

		s.push(arr[i]);
	}

	while (s.empty() == false)
	{
		mp[s.top()] = -1;
		s.pop();
	}

	for (int i = 0; i < n; i++)
		cout << arr[i] << " ---> "
			<< mp[arr[i]] << endl;
}


//start from back solution
void printNGR(int arr[], int size){
    stack <int> s;
    unordered_map<int,int>m;
    for (int i = size -1; i >=0; i--)
    {
        if(s.empty()){
            m[arr[i]] = -1;
            }
        else if(!s.empty() && s.top() > arr[i]){
          m[arr[i]] = s.top();
        }
        else if(!s.empty() && s.top() <= arr[i]){
            while (!s.empty() && s.top() <= arr[i] )
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
