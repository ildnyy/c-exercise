export function map(arry,pred){
    var res=[];
    arry.reduce((i,j,k)=>res.push(pred(j,k)) , 0);
    return res;
}
export function map(arry,pred){
    arry.reduce((i,j,k)=>{i.push(pred(j,k)); return i;}, []);
}