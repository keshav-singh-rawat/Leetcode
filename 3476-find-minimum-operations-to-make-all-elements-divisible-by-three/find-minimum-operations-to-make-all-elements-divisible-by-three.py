class Solution:
    def minimumOperations(self, nums: List[int]) -> int:
        steps=0
        for i in nums:
            if i%3==0:
                steps+=0
            else:
                steps+=1
        return steps
