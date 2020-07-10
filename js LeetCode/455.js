var findContentChildren = function(g, s) {
    s.sort((a,b)=>a-b);
    var num=0;
    for(let i=0;i<g.length;i++){
        for(let j=0;j<s.length;j++){
            if(s[j]>=g[i]){
                num++;
                s.splice(j,1);
                break;
            }
        }
    }
    return num;
};