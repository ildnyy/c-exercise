export async function asyncIterableToArray(arr){
    let res=[];
    for await(const value of arr ){
        res.push(value)
    }
    return  res;
}