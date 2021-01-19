export function numberLines(arry){
    var res=[]
    arry.map((k,i)=>{
        if(i<9){
            res.push('0'+(i+1)+': '+k)
        }
        else
            res.push((i+1)+': '+k)
    })
    return res
}