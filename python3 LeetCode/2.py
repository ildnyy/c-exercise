# 面试题 17.16. 按摩师
# 一个有名的按摩师会收到源源不断的预约请求，每个预约都可以选择接或不接。
# 在每次预约服务之间要有休息时间，因此她不能接受相邻的预约。
# 给定一个预约请求序列，替按摩师找到最优的预约集合（总预约时间最长），返回总的分钟数。

# 动态规划
class Solution:
    def massage(self, nums: List[int]) -> int:
        if not nums: return 0
        dp = [0 for _ in nums]
        for i in range(len(nums)):
            if i == 0:
                dp[i] = nums[i]
            elif i == 1:
                dp[i] = max(nums[0], nums[1])
            else:
                dp[i] = max(dp[i-2]+nums[i], dp[i-1])
        return dp[-1]
# 超时递归
class Solution:
    def massage(self, nums: List[int]) -> int:
        lens = len(nums)
        if lens == 0:  
            return 0
        elif lens == 1:
            return nums[0]
        elif lens == 2:
            return max(nums[0],nums[1])
        len1 = nums[lens-1] + self.massage(nums[:lens-2])
        len2 = nums[lens-2] + self.massage(nums[:lens-3])
        return max(len1,len2)