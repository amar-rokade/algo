// 8
// Last Digit of the Sum of Squares of Fibonacci Numbers
// Problem Description
// Task. Compute the last digit of F 0 2 + F 1 2 + · · · + F n 2 .
// Input Format. Integer n.
// Constraints. 0 ≤ n ≤ 10 14 .
// Output Format. The last digit of F 0 2 + F 1 2 + · · · + F n 2 .
// Sample 1.
// Input:
// 7
// Output:
// 3
// F 0 2 + F 1 2 + · · · + F 7 2 = 0 + 1 + 1 + 4 + 9 + 25 + 64 + 169 = 273.

#include <iostream>

int fibonacci_sum_squares(long long n) {
    int i=0;
    int a =0;
    int b=1; 
    int c;
    while(i<(n%60)){
        c = a+b;
        a =b;
        b=c % 10;
        i++;
    }
    return (a*b)%10;
}

int main() {
    long long n = 0;
    std::cin >> n;
    std::cout << fibonacci_sum_squares(n);
}
