export class Queue{
    constructor(){
        this.data=[]
    }
    get length(){
        return this.data.length
    }
    enq(value){
        this.data.push(value)
    }
    deq(){
        if (this.length === 0) {
            throw new Error('Queue is empty');
          }
        return this.data.shift()
    }
}