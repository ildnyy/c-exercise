var num=[2,3,4,5,6,7];
num.pop();
num.unshift(1);
function square(num){
  var squarenum=[];
  for(var i=0;i<num.length;i++){
   squarenum.push(num[i]*num[i]);
  }
  return squarenum;
}
var squarenum=square(num);
console.log(squarenum);
var oddnum=[];
for(var i=0;i<squarenum.length;i++){
  if(squarenum[i]%2==1){
   oddnum.push(squarenum[i]);
   var h=s*squarenum[i];
   var s=squarenum[i];
  }
}
console.log(oddnum);
console.log(h);