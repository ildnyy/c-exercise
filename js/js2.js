function Person(name,age){
  this.name=name;
  this.age=age;
  this.introduce=function(){
    console.log("I am " +this.name +","+ "I am " +this.age+" years old")
  }
}
var jerry =new Person("Jerry", 2);
    jerry.introduce();
