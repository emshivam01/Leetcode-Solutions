// Palindrome Checker

#include <iostream>
using namespace std;

// void Reverse_String(string &s, int i, int j)
// {
//     if (i >= j)
//     {
//         return;
//     }
//     char temp = s[i];
//     s[i] = s[j];
//     s[j] = temp;
//     Reverse_String(s, i + 1, j - 1);
// }
// class Solution
// {
// public:
//     bool palindromeCheck(string &s)
//     {
//         string s_orginal = s;
//         int i = 0;
//         int j = s.length() - 1;
//         // Reverse the string
//         Reverse_String(s, i, j);
//         // Compare with original string
//         if (s_orginal == s)
//         {
//             return true;
//         }
//         else
//             return false;
//     }
// };


// Better Approach (Just coompare from both ends and move inwards)
// Using this approach we can avoid the unnecssary work of swapping that we don't really required to check if given string is Palindrome or not

bool Reverse_string(string &s, int i, int j){

    if(i>=j){
        return true;
    }
    if(s[i] != s[j]){
        return false;
    }
    Reverse_string(s, i+1, j-1);
}

class Solution
{
public:
    bool palindromeCheck(string &s)
    {
        string s_orginal = s;
        int i = 0;
        int j = s.length() - 1;

        return Reverse_string(s, i, j);
        
    }
};