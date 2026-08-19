// Fibonacci Number

#include <iostream>
#include <vector>
using namespace std;

// int fibo(int n)
// {
//     if (n == 0)
//         return 0;

//     if (n == 1)
//         return 1;
//     return fibo(n - 1) + fibo(n - 2);
// }
// class Solution
// {
// public:
//     int fib(int n)
//     {
//         // your code goes here

//         return fibo(n);
//     }
// };

// Better Approach - Reducing the recursive call

int fibo(int n, vector<int> &arr)
{
    if(n==0) return 0;
    if(n==1) return 1;
    if(arr[n] != -1) return arr[n];
    arr[n] = fibo(n-1, arr) + fibo (n-2, arr);
    return arr[n];
}
class Solution
{
public:
    int fib(int n)
    {
        // your code goes here
        vector<int> arr(n+1, -1);
        arr[0] = 0;
        arr[1] = 1;

        return fibo(n, arr);
    }
};
