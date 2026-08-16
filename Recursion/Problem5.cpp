// Leetcode Problem 50
// Pow(x,n)
// Implement pow(x, n), which calculates x raised to the power n (i.e., xn).


#include <iostream>

double pow(double x, int n){
    if(n==0){
        return 1;
    }
    if(n>0){
        int half = pow(x, n/2);
        if(n%2==0){
            return half * half;
        }
        else {
            return half * half * x;
        }
    }
}

bool negative = n < 0;

long long exp = n;

if (exp < 0)
{
    exp = -exp;
}



double pow(double x, long long n){
    if (n == 0)
    {
        return 1;
    }
    double half = pow(x, exp/2);
    double result;

    if (n%2==0)
    {
        result = half * half;
    }
    else {
        result = half * half * x;
    }

    return result;

}

if(n<0){
    return 1/result;
}
else {
     return result
}