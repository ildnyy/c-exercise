export function mapCb(arr, mapFunc, resultFunc) {
    if(!(arr instanceof Array)){
       resultFunc(new Error('not a array'+arr))
       return;
    }
    let index=0,res=[];
    cbmap();
    function cbmap(){
        if(index>=arr.length){
            resultFunc(null,res);
        }
        else{
            mapFunc(arr[index],index,
                function(err,result){
                if(err){
                    resultFunc(err)
                }
                else{
                    res.push(result);
                    index++;
                    cbmap();
                }
            })
        }
    }
}
  