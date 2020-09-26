/**
 * Definition for a binary tree node.
 * function TreeNode(val) {
 *     this.val = val;
 *     this.left = this.right = null;
 * }
 */
/**
 * @param {TreeNode} root
 * @param {number} sum
 * @return {number[][]}
 */
var pathSum = function(root, sum) {
    if (!root) {
        return [];
    }
    const pathes = [];
    search(root, sum, pathes, []);
    return pathes;
};

function search(root, sum, pathes, path) {
    if (!root) {
        return;
    }

    path = [...path, root.val]; // 深拷贝

    if (!root.left && !root.right && root.val === sum) {
        pathes.push(path);
        return;
    }

    search(root.left, sum - root.val, pathes, path);
    search(root.right, sum - root.val, pathes, path);
}
