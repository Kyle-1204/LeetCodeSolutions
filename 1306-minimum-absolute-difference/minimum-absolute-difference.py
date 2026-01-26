class Solution(object):
    def minimumAbsDifference(self, arr):
        """
        :type arr: List[int]
        :rtype: List[List[int]]
        """
        minDiff = max(arr) - min(arr)
        ans = []
        arr.sort()
        for i in range(len(arr)-1):
            if arr[i+1] - arr[i] < minDiff:
                minDiff = arr[i+1] - arr[i]
        for i in range(len(arr)-1):
            if arr[i+1] - arr[i] == minDiff:
                ans.append([arr[i],arr[i+1]])
        return ans
            
            
            