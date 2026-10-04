class Solution:
    def topKFrequent(self, nums: list[int], k: int) -> list[int]:
        freq = {}

        # Counting frequency of numbers
        for num in nums:
            if num in freq:
                freq[num] += 1
            else:
                freq[num] = 1
        
        # Extracting most K freq elem

        result = sorted(freq.items(), key=lambda x: x[1], reverse=True)

        res = []

        for key, value in result[:k]:
            res.append(key)
        
        return res

        