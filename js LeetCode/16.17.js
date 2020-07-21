var maxSubArray = function(nums) {
    var dp=[];
    dp[0]=nums[0]
    for(let k=1;k<nums.length;k++){
        dp[k]=Math.max(nums[k],nums[k]+dp[k-1])
    }
    return Math.max(...dp);
};