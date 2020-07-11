var advantageCount = function(A, B) {
    A.sort((a,b)=>a-b);
    var c=new Array,min;
    B.map(i=>{
        A.map(j=>{
            if(A[A.length-1]<=i) return A[0];
            else if(j>i&&min!=j){
                min=j;
                return min;
            }
        })
        c.push(min);
    })
    return c;
};