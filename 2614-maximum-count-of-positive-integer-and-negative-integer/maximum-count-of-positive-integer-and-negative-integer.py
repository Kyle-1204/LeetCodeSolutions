class Solution:
    def maximumCount(self, nums: List[int]) -> int:
        pos = 0
        neg = 0
        for val in nums:
            if val > 0:
                pos += 1
            elif val < 0:
                neg += 1
        return max(pos, neg)
        