export function countMatches(arry,pred){
    var i=0;
    return arry.reduce((i,j)=> pred(j)>0 ? i+1: i+0 ,0)
}