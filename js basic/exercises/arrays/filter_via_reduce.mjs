export function filter(arry,pred){
    var res=[];
    arry.reduce((i,j,k)=>pred(j,k)? res.push(j): 0 , 0);
    return res;
}