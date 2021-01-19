export class Color{
    constructor(name){
        this.name=name;
    }
    static fromJson(jsonValue) {
        return new Color(jsonValue.name);
    }
    toString(){
        return `Color(${this.name})`
    }
}
export class ColorPoint{
    static fromJson(jsonValue) {
        return new ColorPoint(jsonValue.x, jsonValue.y, Color.fromJson(jsonValue.color));
    }
    constructor(x,y,color){
        if (!(color instanceof Color)) {
            throw new Error('Not an instance of Color: '+color);
        }
        this.x = x;
        this.y = y;
        this.color = color;
    }
    toString() {
        return `ColorPoint(${this.x}, ${this.y}, ${this.color})`;
    }
}