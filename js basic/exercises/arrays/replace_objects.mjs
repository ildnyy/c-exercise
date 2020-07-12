export function replaceObjects(arry){
    return arry.flatMap(n=>{
        let res=[];
        for (let i=0; i<n.repeat;i++) {
            res.push(n.value);
        }
        return res;
    })
}