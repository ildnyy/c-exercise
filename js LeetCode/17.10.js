var majorityElement = function(nums) {
    let count=1,temp=nums[0],m=nums.length/2;
    for(let i=1;i<nums.length;i++){
        if(temp==nums[i]) count++;
        else count--;
        if(count==0){
            temp=nums[i];
            count=1;
        }
    }
    if(count>0){
        count=0;
        nums.map(num=>{
            if(num==temp){count++;}
        })
    }
    return count > m ? temp:-1;
};