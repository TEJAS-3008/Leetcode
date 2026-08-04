class Solution(object):
    def findMissingElements(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        nums.sort()
        output = []
        for i in range(nums[0], nums[-1]):
            if i not in nums:
                output.append(i)
        
        return output
        