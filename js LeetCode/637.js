/**
 * Definition for a binary tree node.
 * function TreeNode(val) {
 *     this.val = val;
 *     this.left = this.right = null;
 * }
 */
/**
 * @param {TreeNode} root
 * @return {number[]}
 */
var averageOfLevels = function(root) {
    const que=[];
    const res=[];
    que.push(root)
    while(que.length){
        let sum=0,size;
        size = que.length;
        for(let i = 0;i < size;i++){
            const cur = que.shift();
            sum += cur.val;
            if(cur.left != null){
                que.push(cur.left);
            }
            if(cur.right != null){
                que.push(cur.right);
            }
        }
        res.push(sum / size);
    }
    return res;
};