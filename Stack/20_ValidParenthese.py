class Solution:
    def isValid(self, s: str) -> bool:
        stack = []
        pairs = {
                ')': '(',
                ']': '[',
                '}': '{'
            }

        for char in s:
            if char == '(' or char == '[' or char == '{':
                stack.append(char)
            else:
                if not stack:
                    return False
                else:
                    if pairs[char] == stack[-1]:
                        stack.pop()
                    else:
                        return False
        return not stack