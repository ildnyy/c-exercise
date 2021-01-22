// 剑指 Offer 11. 旋转数组的最小数字
class Solution {
public:
    int minArray(vector<int>& numbers) {
        int i;
        if(numbers.empty()) return -1;
        if(numbers.size() == 1) return numbers[0];
        for(i = 1;i < numbers.size();i++){
            if(numbers[i] < numbers[i-1]) return numbers[i];
        }
        return numbers[0];
    }
};