class Solution:
    def getConcatenation(self, nums: list[int]) -> list[int]:
        new_arr = nums.copy()
        for num in nums:
            new_arr.append(num)
        
        return new_arr

        