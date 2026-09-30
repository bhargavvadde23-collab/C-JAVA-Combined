//funtion with multiple parameters
function add(a,b)
{
    return a+b;
}
console.log(add(64,5));


function mul(a,b)
{
    return a*b;
}
console.log(mul(23,3));


//function with single paramater
function square(x){
    return x*x;
}
console.log(square(4));



//function with no paramters
function greet()
{
    return "Goodbye World";
}
console.log(greet());


//function with multiple statements
function div(a,b)
{
    let c=a+b;
    let d=c/a;
    return d;
}
console.log(div(2,4))



//function with defaut parameters
function address(name="guest")
{
    return "Hello "+ name;
}
console.log(address("bhargav"));
console.log(address());



//function returning another function
function multiplyby(factor)
{
    return function(number)
    {
        return number * factor;
    }
}

const double=multiplyby(2);
console.log(double(4));

const triple=multiplyby(3);
console.log(triple(5));