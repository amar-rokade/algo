// Task. Given two integers n and m, output Fn mod m (that is, the remainder of F n when divided by m).
// Input Format. The input consists of two integers n and m given on the same line (separated by a space).
// Constraints. 1 ≤ n ≤ 10 14 , 2 ≤ m ≤ 10 3 .
// Output Format. Output F n mod m.


// Sample1.
// Input:
// 239 1000
// Output:
// 161
// F 239 mod 1 000 = 39 679 027 332 006 820 581 608 740 953 902 289 877 834 488 152 161 (mod 1 000) = 161.

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


long long fast(long long n, long long m) {
    long size,ans;
    std::vector<int> period = fibonacci_period(m);
    size = period.size();

    if (n <= 1){
        return n;
    }
    while(n >=size){
        n = n % size;
    }
    ans = period[n];
    return ans;
    
}

int main() {
    long long n, m;
    std::cin >> n >> m;
    std::cout << fast(n, m) << '\n';  
}

