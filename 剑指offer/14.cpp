//剑指 Offer 14- I. 剪绳子
class Solution {
public:
    int cuttingRope(int n) {
        int out=0;
        if(n==2) return 1;
        for(int i=2;i<n;i++){
            int max=1;
            if(n%i < 1) 
                for(int j=0;j<i;j++){
                    max *=(n/i);
                }
            else{
                for(int j=0;j<i-n%i;j++){
                    max *=(n/i);
                }
                for(int j=0;j<n%i;j++){
                    max *=((n/i)+1);
                }
            }
            if(max > out) out = max;
        }       
        return out;
    }
};

//剑指 Offer 14- II. 剪绳子 II
class Solution {
public:
    int cuttingRope(int n) {
        if(n <= 3)  return n-1;     //如果n<=3,数字要求至少分为两部分，实际结果的最大值为n-1
        long long res = 1;
        while(n > 4)
        {
            n = n - 3;
            res = res * 3 % 1000000007;
        }
        return res * n % 1000000007;
    }
};