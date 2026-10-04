class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        d_s = {}
        d_t = {}

        for char in s:
            if char in d_s:
                d_s[char] += 1
            else:
                d_s[char] = 1
        
        for char in t:
            if char in d_t:
                d_t[char] += 1
            else:
                d_t[char] = 1

        return d_s == d_t