// 剑指 Offer 13. 机器人的运动范围
class Solution {
public:
    int movingCount(int m, int n, int k) {
        int cnt = 0;
        int visi[m][n] ;
        memset(visi,0,sizeof(visi));
        visi[0][0] = 1;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                int a,b,c,d;
                a = i/10;
                b = i%10;
                c = j/10;
                d = j%10;
                if(a+b+c+d>k) continue;
                if(i-1 >= 0&&visi[i-1][j]) visi[i][j]=1;
                if(j-1 >= 0&&visi[i][j-1]) visi[i][j]=1;
                cnt+=visi[i][j]; 
            }
        }
        return cnt;
    }
};