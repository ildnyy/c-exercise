export function arrayToString(arr) {
    let res='';
    arr.map((value,i)=>{
        if(i > 0){
            res+='\n';
        }
        res+=(i+1) + '. '+value;
    })
    return res;
  }