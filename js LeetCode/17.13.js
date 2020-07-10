var respace = function(dictionary, sentence) {
    if(sentence.length==0) return 0;
    let dp = new Array(sentence.length).fill(0);
    for(let i=1;i<=sentence.length;i++){
        dp[i]=dp[i-1]+1;
        dictionary.map((word)=>{
            if(word.length<=i&&sentence.substring(i-word.length,i)==word){
                dp[i]=Math.min(dp[i],dp[i-word.length]);
            }
        })
    }
    return dp[sentence.length];
};