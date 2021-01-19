export function findMax(arr){
    let max=-Infinity;
    for(const n of arr ){
        if(n>max) max=n;
    }
    return max;
}