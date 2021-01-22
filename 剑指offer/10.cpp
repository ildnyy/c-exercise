// 剑指 Offer 10- II. 青蛙跳台阶问题
class Solution {
public:
    int numWays(int n) {
        int a,b,c;
        if(n == 0) return 1;
        if(n < 3) return n;
        a=1;
        b=2;
        for(int i=3;i<=n;i++){
            c = b;
            b = (a+b)%(1000000007);
            a = c;
        }
        return b;
    }
};