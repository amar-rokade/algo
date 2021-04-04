// Problem Introduction
// The goal in this problem is to find the last digit of a sum of the first n Fibonacci numbers.
// Problem Description
// Task. Given an integer n, find the last digit of the sum F 0 + F 1 + · · · + F n .
// Input Format. The input consists of a single integer n.
// Constraints. 0 ≤ n ≤ 10 14 .
// Output Format. Output the last digit of F 0 + F 1 + · · · + F n .

// Input:
// 3
// Output:
// 4
// F 0 + F 1 + F 2 + F 3 = 0 + 1 + 1 + 2 = 4.

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


long fibonacci_sum_fast(long long n) {
    long ans,sum=0;

    std::vector<int> period = fibonacci_period(10);

    if (n <= 1){
        return n;
    }
    
    long rem = n % 60;
    for (int i=0;i<=rem;i++){
        sum +=period[i];
    }
    long qu = n / 60;
    ans = (qu * 280 + sum )% 10;

    return ans;
    
}


int main() {
    long long n = 0;
    std::cin >> n;
    std::cout << fibonacci_sum_fast(n);
}
