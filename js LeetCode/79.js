/**
 * @param {character[][]} board
 * @param {string} word
 * @return {boolean}
 */
var exist = function(board, word) {
    const use=[];
    for(let i = 0;i < board.length;i++){
        use[i]=[];
        for(let j = 0;j < board[i].length;j++){
            use[i][j]=0;
        }
    }
    const canfind=(row , col , i)=>{
        if(i > word.length-1){
            return true;
        }
        if(row < 0 || col < 0 || row >= board.length || col >= board[0].length) return false;
        if(use[row][col] || board[row][col] != word[i]) return false;
        use[row][col] = 1;  // use记录一下当前点被访问了
        const canFindRest =
        canfind(row + 1, col, i + 1) ||
        canfind(row - 1, col, i + 1) ||
        canfind(row, col + 1, i + 1) ||
        canfind(row, col - 1, i + 1); 

        if (canFindRest) {
        return true;    
        }
        use[row][col] = 0;
        return false;
    }
    for(let i = 0;i < board.length;i++){
        for(let j = 0;j < board[i].length;j++){
            if(word[0] == board[i][j] && canfind(i,j,0))
            return true;
        }
    }
    return false;
};