export async function mapAndRemoveEmptyStringsAsync(callback,arr){
    const h = arr.map(callback);
    const res = await Promise.all(h);
    return res.filter(x=> x.length>0) 
}