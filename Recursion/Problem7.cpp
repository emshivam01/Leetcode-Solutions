// Palindrome Checker

void Reverse_String(string &s, int i, int j)
{
    if (i >= j)
    {
        return;
    }
    char temp = s[i];
    s[i] = s[j];
    s[j] = temp;
    Reverse_String(s, i + 1, j - 1);
}
class Solution
{
public:
    bool palindromeCheck(string &s)
    {
        string s_orginal = s;
        int i = 0;
        int j = s.length() - 1;
        // Reverse the string
        Reverse_String(s, i, j);
        // Compare with original string
        if (s_orginal == s)
        {
            return true;
        }
        else
            return false;
    }
};


