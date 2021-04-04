// 
// Last Digit of the Sum of Fibonacci Numbers Again
// Problem Introduction
// Now, we would like to find the last digit of a partial sum of Fibonacci numbers: F m + F m+1 + · · · + F n .
// Problem Description
// Task. Given two non-negative integers m and n, where m ≤ n, find the last digit of the sum F m + F m+1 +
// · · · + F n .
// Input Format. The input consists of two non-negative integers m and n separated by a space.
// Constraints. 0 ≤ m ≤ n ≤ 10 14 .
// Output Format. Output the last digit of F m + F m+1 + · · · + F n .

// Input:
// 37
// Output:
// 1
// F 3 + F 4 + F 5 + F 6 + F 7 = 2 + 3 + 5 + 8 + 13 = 31.

#include <iostream>
#include <vector>


std::vector<int> fibonacci_period(int m) {
    std::vector<int> period;
    int a =0;
    int b=1; 
    int c; 
    period.push_back(a);
    while(1){ 
        period.push_back(b);
        c = a+b;
        a =b;
        b=c % m;
        if(b == 0 && (a+b)% m == 1){
            break;
        }
    } 
    return period;
}


long long get_fibonacci_partial_sum_naive(long long from, long long to) {
   
    if (to <= 1){
        return to;
    }

    long ans=0,from_sum=0,to_sum=0;

    std::vector<int> period = fibonacci_period(10);

        long rem = from % 60;
    
        for (int i=rem;i<=60;i++){
            from_sum +=period[i];
        }
        
        rem = to %60;
        for (int i=0;i<=rem;i++){
            to_sum +=period[i];
        }
        ans =((to - from )/ ((60 - from % 60) + (to % 60)) ) * 280 + to_sum + from_sum;
        return ans%10;
}

int main() {
    long long from, to;
    std::cin >> from >> to;
    std::cout << get_fibonacci_partial_sum_naive(from, to) << '\n';
}
