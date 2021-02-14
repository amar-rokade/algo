
// Last Digit of a Large Fibonacci Number
// Problem Description
// Task. Given an integer n, find the last digit of the nth Fibonacci number F n (that is, F n mod 10).
// Input Format. The input consists of a single integer n.
// Constraints. 0 ≤ n ≤ 10 7 .
// Output Format. Output the last digit of F n .
// Sample 1.
// Input:
// 3
// Output:
// 2
// F 3 = 2.
#include <iostream>

int get_fibonacci_last_digit_naive(int n) {
    if (n <= 1)
        return n;

    int previous = 0;
    int current  = 1;

    for (int i = 0; i < n - 1; ++i) {
        int tmp_previous = previous;
        previous = current;
        current = (tmp_previous + current)%10;
    }

    return current % 10;
}

int main() {
    int n;
    std::cin >> n;
    int c = get_fibonacci_last_digit_naive(n);
    std::cout << c << '\n';
    }
