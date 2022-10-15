/*What Javascipt is:
  a programing language made for websites that enable dynamic updates and make the site interactive. Javascript can do various things: timely content updates, interactive maps, animated 2D/3D graphics, scrolling video jukeboxes, etc. It also implements Application Programming Interfaces (API's). It can be run natively in the browser.
  
  API's allow for communication from one to another, transfering information. They are essentialy premade programs ready for implementaion. They transfer only the information needed.
  */
// different data types include : undefined, null, boolean, string, symbol, bigint, number, object. 

// variables are containers for data that can be use dynamically
// how to create a variable

var varObj;

// all statements need to end with semicolons.
// operators consists of action to a value with arithmatic symbols.
// using the 'assign' operator (=) to a assign a number(data) to the 'varObj'(var) variable

var varObj;
varObj = 2;

// 'varObj' (var) now has a value of 2(num)

// one can assign variables to other variables
//placement matters when assigning: (Being Assigned) = (Assigning)

objVar = varObj;


// one can also initialize a variable with a value on the same line

var myVar = 1;

//basic arithmatics

var a = 23412354;
var b = 3141569239;

var sum = a + b;

var c = 89;
var d = 23;

var dif = c - d;

var pro = dif * sum;

var quo = sum / pro;

// incrementing and decrementing

sum--;
//sum-- is equal to sum sum = sum - 1

sum ++;
// sum = sum + 1

//floats are decimal numbers

var float = 23.1;
//remainder  operator (%) gives the remainder of the division of two numbers

var rem= 21 % 5;

// rem(var) is 1(num)
// you can check if a number is even or odd (If it returns a 1 when when checked by 2 its odd, 0 is even)

/* Augemented Arithmatics 

"i-=2" = "i = i - 2"
"i+=2" = "i = i + 2"
"i*=2" = "i = i * 2"
"i/=2" = "i = i / 2" */

/*  Escaping  Sequences:
\'	single quote
\"	double quote
\\	backslash
\n	newline
\r	carriage return
\t	tab
\b	word boundary
\f	form feed */

// concatenating strings

 var conStr = "This string" + "is conatenated";

// augemented strings

var ac = "First part. "
ac+= "Second part. "

// getting how long a string is 

var strLength = ac.length;

// bracket notation

var letterOne = ac[0];


// immutable: data that cannot be altered once created

//Getting the last letter of a string

var firstName = "Charles";
var lastLetter = firstName[firstName.length - 1];

// arrays are multiple values stored in one variables
var sandwich = ["peanut butter", "jelly", "bread"];

// nesting arrays 

[["Bulls", 23], ["White Sox", 45]]

// arrays are mutable so the data stored in them can be changed
var arr = [
  [1,2,3],
  [4,5,6],
  [7,8,9],
  [[10,11,12], 13, 14]
];

myArray[2][1] = 2;
// the array containing [7,8,9] is now [7,2,9]

// manipulating arrays with push() functions

arr.push("push");

// this adds "push"(str) at the end of the array

// .pop() will remove the last element of and array

var popped = arr.pop();

// you can assign the popped element to a variable

// .shift() will remove the first item of an array

// .unshift will add a element as the first in a array


// writing functions

function functionName () {
  console.log("hello // world");
}

functionName();

/* Parameters are variables that act as placeholders for the values that are to be input to a function when it is called. When a function is defined, it is typically defined along with one or more parameters. The actual values that are input (or "passed") into a function when it is called are known as arguments.*/

function functionWithArgs(num1, num2) {
  console.log(num1 + num2); 
}

functionWithArgs(7,9);


// global scope function

/*Varivables which are defined outside of a function are know have a Global Scope. They can be used everywhere in your code. Variables which are used without the var keyword are automatically created in the global scope.*/

Global = 2;

//local scope and functions

/* When defining a variable inside of a function, it can only be used 
inside that function. The variable is invalid outside of it.*/

function Loc() {
  var vari =  "Charles";
  console.log(vari);
}

loc();
console.log(vari);

// Because of this, you can have variables with the same name.When you do this, the local variable takes precedence over the global variable.

// return function

function plusThree(num) {
  return num + 3;
}
var answer = plusThree(5);

// a function without a return statement will leave the value of the function is undefined

// boolean values are either true or false

// equality operator "==" compares both values on each side and returns true or false depending if they are the same or not. It tries to convert both values into a common type (i.e '3' == 3, converts '3' into a number)

// strict equality operator "==="is the same but does not convert both values

// swtich statements are the same as repeated if statments but more efficent. It will test "cases" against the varible specified. If the case matches, the statement goes through the "break;" will be executed.,  If it doesnt, it will go on to the next case. If it doesnt match any of the cases, then it will run the defualt statement (if there is one) 

function sequentialSizes(val) {
  var answer = "";

switch(val) {
  case 1:
  case 2:
  case 3:
    answer = "Low"
    break;
  case 4:
  case 5:
  case 6:
    answer = "Mid"
    break; 
  case 7:
  case 8:
  case 9:
    answer = "High"
    break;
}

  return answer;
}

sequentialSizes(1);

// you can also assign a statment to multiple cases\

switch (val) {
  case "bob":
    answer = "Marley";
    break;
  case 42:
    answer = "The  Answer";
    break;
  case 1:
    answer = "There is no #1";
    break;
  case 99:
    answer = "Missed me by this much!";
    break;
  case 7:
    answer = "Ate Nine";
    break;
}
// using the return value can save alot of time

function isLess(a, b) {
  return a < b;
}

// V.S

function isLess(a, b) {
  if (a < b) {
    return true;
  } else {
    return false;
  }
}

// code for card counting
var count = 0;

function cc(card) {
 var card;
 var bet = " Bet";
 var hold = " Hold";
 var dec;

  switch (card) {
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    count++;
    break;
    case 10:
    case 'J':
    case 'Q':
    case 'K':
    case 'A':
    count--;
    default:
    count;
    break;
  }
 
 if (count > 0) {
   dec = count + bet;
 } else {
   dec = count + hold;
 }


  return dec;
}

cc(2); cc(3); cc(7); cc('K'); cc('A');

// objects are similar to arrays but you access them through "properties" instead of indexes

var testObj = {
  "hat": "ballcap",
  "shirt": "jersey",
  "shoes": "cleats"
};

var hatValue = testObj.hat;  // hatValue will be equal to ballcap
var shirtValue = testObj.shirt; // shirtValue will be equal to jersey

// using bracket notation

var testObj = {
  "an entree": "hamburger",
  "my side": "veggies",
  "the drink": "water"
};

var entreeValue = testObj["an entree"]; 
var drinkValue = testObj["the drink"];

var dogs = {
  Fido: "Mutt",  Hunter: "Doberman",  Snoopie: "Beagle"
};
var myDog = "Hunter"; // myDog is now Hunter, it is a string
var myBreed = dogs[myDog]; //assigns the value of myBreed as the value of hunter inside the dog object
console.log(myBreed);

// updating object properties

myBreed = "Huskey";

// adding properties
myDog.bark = "woof";

//testing for properties
myDog.hasOwnProperty("bark");
// hasOwnProperty returns a boolean value

// deleting properties
delete myDog.bark;

// nested objects
var myStorage = {
  "car": {
    "inside": {
      "glove box": "maps",
      "passenger seat": "crumbs"
     },
    "outside": {
      "trunk": "jack"
    }
  }
};

var gloveBoxContents = myStorage.car.inside["glove box"];

//nested arrays in objects
var myPlants = [
  {
    type: "flowers",
    list: [
      "rose",
      "tulip",
      "dandelion"
    ]
  },
  {
    type: "trees",
    list: [
      "fir",
      "pine",
      "birch"
    ]
  }
];

var secondTree = myPlants[1].list[1];

// iterating through an array 

var myArr = [ 2, 3, 4, 5, 6];
var total = 0;
for (var i = 0; i < myArr.length; i++) {
  total += myArr[i];
}

// Setup
var collection = {
  2548: {
    albumTitle: 'Slippery When Wet',
    artist: 'Bon Jovi',
    tracks: ['Let It Rock', 'You Give Love a Bad Name']
  },
  2468: {
    albumTitle: '1999',
    artist: 'Prince',
    tracks: ['1999', 'Little Red Corvette']
  },
  1245: {
    artist: 'Robert Palmer',
    tracks: []
  },
  5439: {
    albumTitle: 'ABBA Gold'
  }
};

// Only change code below this line
function updateRecords(object, id, prop, value) {
  var obj = object[id];
   if (obj[prop] != "tracks" && value != undefined) {
     obj[prop] = value;
   } else if (obj[prop] == "tracks" && obj.hasOwnProperty("tracks") == false) {
     obj[prop] = [value];
   } else if (obj[prop] == "tracks" && value != undefined) {
     obj[prop].push(value);
   } else if (value == undefined) {
     delete obj[prop];
   }
  return object;
}

updateRecords(collection, 5439, 'artist', 'ABBA');

//hell
// Setup
var contacts = [
  {
      "firstName": "Akira",
      "lastName": "Laine",
      "number": "0543236543",
      "likes": ["Pizza", "Coding", "Brownie Points"]
  },
  {
      "firstName": "Harry",
      "lastName": "Potter",
      "number": "0994372684",
      "likes": ["Hogwarts", "Magic", "Hagrid"]
  },
  {
      "firstName": "Sherlock",
      "lastName": "Holmes",
      "number": "0487345643",
      "likes": ["Intriguing Cases", "Violin"]
  },
  {
      "firstName": "Kristian",
      "lastName": "Vos",
      "number": "unknown",
      "likes": ["JavaScript", "Gaming", "Foxes"]
  }
];


function lookUpProfile(name, prop){
  var result;
  for (var i = 0; i < contacts.length; i++){ 
      if (contacts[i].firstName != name ) {
          result = "No such contact";
          } else if (contacts[i].hasOwnProperty(prop) == false) {
              return "No such property";
          } else {
              return contacts[i][prop];
          }
          
      } 
      return result;
  }


// generating random numbers using the Math.random() fucntion. This will give a decimal between 0 and 1. It can return a zero but not a one.

Math.random() * 10;
// will mulitply the number by 10 to get a floating number

Math.floor(Math.random() * 10) 
// Math.floor rounds an float number to the closest whole number and becomes an integer. Will give a integer from 1 to 9
// recursion is the act of a  function calling itself to create a loop 

var b = [];
function countdown(n){
   if (n < 1) {
    return [];
  } else {
    b.push(n);
    const countArray = countdown(n - 1);
    return b;
  }
}


var array = [];
function rangeOfNumbers(startNum, endNum) {
  array.push(startNum);
  console.log(array);
  if (startNum >= endNum) {
    return ([endNum]);
    } else {
      var returned = rangeOfNumbers(startNum + 1, endNum);
      return array;
    }
    
  };
  
/*____________________________________________________________________________________________________________________________________________________________________________________________________
______________________________________________________________________________________________________________________________________________________________________________________________________
______________________________________________________________________________________________________________________________________________________________________________________________________
______________________________________________________________________________________________________________________________________________________________________________________________________
______________________________________________________________________________________________________________________________________________________________________________________________________
______________________________________________________________________________________________________________________________________________________________________________________________________
______________________________________________________________________________________________________________________________________________________________________________________________________
______________________________________________________________________________________________________________________________________________________________________________________________________
______________________________________________________________________________________________________________________________________________________________________________________________________
*/

// let variables are not allowed to be overwriten compared to normal variables because they dont allow the program to overwrite the intial vlaue

let immu = "one";
immu = "two";

// the example above will return an error

function checkScope() {
  let i = 'function scope';
  if (true) {
    let i = 'block scope';
    console.log('Block scope i is: ', i);
  }
  console.log('Function scope i is: ', i);
  return i;
}
// the scope of a  let variable is within the confines fo that specific block of code the i inside the function is different than the i inside the if statement

// const is another way of defining a variable but it is read-only

function printManyTimes(str) {

  const SENTENCE = str + " is cool!";
  for (let i = 0; i < str.length; i+=2) {
    console.log(SENTENCE);
  }

}
printManyTimes("freeCodeCamp");
// common etiqutee to name const variables in all  caps

// you can however change it with other methods, like the one below 

const s = [5, 7, 2];
function editInPlace() {
  s[0] = 2;
  s[1] = 5;
  s[2] = 7;
}
editInPlace();

// const only prevoperator
  return MATH_CONSTANTS.PI;
const PI = freezeObj();




// arrow functions
const magic = () => new Date();

// more for one line function that do not need a name since it wont be used / used as much

// arrow functions can take arguments too 
const doubler = (item) => item * 2;
doubler(4);

// you can omitt the parentheses enclosing the parameter
const doubler = item => item * 2;

const myConcat = (arr1, arr2) => arr1.concat(arr2);
console.log(myConcat([1, 2], [3, 4, 5]));





// default parameters are values assigned to the variable when there is no argument declared in the calling of the function

const increment = (number, value = 1) => number + value;





// rest parameters allow for an indefinite amount of parameters to be used and stored in an array

const sum = (...args) =>  args.reduce((a, b) => a + b, 0);





// spread operators "unzips" an array and is used for places that expect more than one parameters
const arr1 = ['JAN', 'FEB', 'MAR', 'APR', 'MAY'];
let arr2;

arr2 = [...arr1];  // Change this line

console.log(arr2);

//only works on arguments or in an array literal





// destructuring assignment is special syntax for neatly assigning values directly from an object

const user = { name: 'John Doe', age: 34 };

// wihtout assignment
const name = user.name;
const age = user.age;

// with assignment 
const { name, age } = user;

// assignment order does not matter. variable name will be the same as the property name

const HIGH_TEMPERATURES = {
  yesterday: 75,
  today: 77,
  tomorrow: 80
};

const {tomorrow, today} = HIGH_TEMPERATURES;

console.log(today); // outputs 77

// you can customize the variable name by putting colons after the property that has been assigned

const {tomorrow: highTomorrow, today: highToday} = HIGH_TEMPERATURES;

console.log(highToday); // outputs 77

// you can do this with nested objects too 
const user = {
  johnDoe: { 
    age: 34,
    email: 'johnDoe@freeCodeCamp.com'
  }
};

// with same variable name
const { johnDoe: { age, email }} = user;

// different lastName
const { johnDoe: { age: userAge, email: userEmail }} = user;

const LOCAL_FORECAST = {
  yesterday: { low: 61, high: 75 },
  today: { low: 64, high: 77 },
  tomorrow: { low: 68, high: 80 }
};
  
const {today: {low: lowToday, high: highToday}} = LOCAL_FORECAST;





// destructing arrays is similar to the spread operator except you and pick what value you want to resign

const [a, b] = [1, 2, 3, 4, 5, 6];

// 1 and 2 will be reassigned to a and b in their respective order
// you can skip values by replacing variables with commas
const [a, b,,, c] = [1, 2, 3, 4, 5, 6];
//     1  2 34 5

let a = 8, b = 6;

[a, b] = [b, a]; // swapping the values of a and b

// using array destructuring and rest parameter, you can separate the chosen values and the non chosen ones in a single array

const [a, b, ...arr] = [1, 2, 3, 4, 5, 7];
console.log(a, b);
console.log(arr);

// because the rest parameter has an indefinite amount of parameters, it creates an array for the rest of the numbers in the array 

const source = [1,2,3,4,5,6,7,8,9,10];
function removeFirstTwo(list) {
  const [a,b, ...arr] = list;
  return arr;
}
const arr = removeFirstTwo(source);

// you can destructure the object in a function by defining the variable in the functions parameters and passing the object into the function

const stats = {
  max: 56.78,
  standard_deviation: 4.34,
  median: 34.54,
  mode: 23.87,
  min: -0.75,
  average: 35.85
};

const half = ({max, min}) => (max + min) / 2.0; 
// decontrusts the object in the parameter section of the function so its able to be used in the function itself





// template literal is a way to create complex strings using string interpolation.
const result = {
  success: ["max-length", "no-amd", "prefer-arrow-functions"],
  failure: ["no-var", "var-on-top", "linebreak"],
  skipped: ["no-extra-semi", "no-dup-keys"]
};
function makeList(arr) {

var failureItems = [];
for (let i = 0; i < arr.length; i++) {
 var failureItem = `<li class="text-warning">${arr[i]}</li>`;
 failureItems.push(failureItem);
}

console.log(failureItems);
  return failureItems;
}

const failuresList = makeList(result.failure);
// the need for the concatenation operator is gone, as well as adding the /n. this acts as a place holder for the 





// reducing redunancy with property shorthand

const getMousePosition = (x, y) => ({
  x: x,
  y: y
});

const getMousePosition = (x, y) => ({ x, y });
// assigns x to x immediately

// reducing redunancy by removing function when declaring a fuction

const person = {
  name: "Taylor",
  sayHello() {
    return `Hello! My name is ${this.name}.`;
  }
};

// class keyword defines class object. Uppper CamelCase should be used
class Vegetable  {
  constructor(name) {
  this.name = name;
  }
}
//constructor functions are a function that is used to construct objects with predefined properties and methods that can be used whenever you want to use them.

// the "this." keyword is a placeholder for objects that will be passed on the the constructor function, these objects will then inherit the properties and methods from the functions


const carrot = new Vegetable('carrot');
console.log(carrot.name);


// getters and setters are functions what retrieves the value of the property of the object (getters) and passing a value to the object (setters)

class Book {
  constructor(author) {
    this._author = author;
  }
  // getter
  get writer() {
    return this._author;
  }
  // setter
  set writer(updatedAuthor) {
    this._author = updatedAuthor;
  }
}
const novel = new Book('anonymous');
console.log(novel.writer);
novel.writer = 'newAuthor';
console.log(novel.writer);

// will print anonymous first and newAuthor after





// module scripts will export sections of code to another file
//<script type="module" src"example.js"><script/>


//export keyword will export a single function to be used in other files. here are the different methods 

export const uppercaseString = (string) => {
  return string.toUpperCase();
}

const lowercaseString = (string) => {
  return string.toLowerCase()
}

export {lowercaseString};

//import keyword imports functions from another file to be used in the current code

import {uppercaseString, lowercaseString} from './string_functions.js';

// you can import all of the contents of a file with import * as

import * as stringFunctions from "./string_functions.js";

stringFunctions.uppercaseString("hello");
stringFunctions.lowercaseString("WORLD!");

// import string_functions to another file in the object called stringFunctions

// export default will create a fallback value for the exported function
// import default is the same as the regular import syntax except it is written without the curly brackets around the parameters 

// promises are constructor functions that are to be executed asynchronously from the task in the code. It has three states: pending, fulfilled,rejected. pending is when their is no value evaluated yet. Fulfilled is when the promise is fulfilled and rejected is when it isn't. 

const makeServerRequest = new Promise((resolve, reject) => {
  // responseFromServer is set to false to represent an unsuccessful response from a server
  let responseFromServer = false;
    
  if(responseFromServer) {
    resolve("We got the data");
  } else {  
    reject("Data not received");
  }
});

makeServerRequest.then(result => {
  console.log(result);
});
// this gets a response from the server and passing on string values to the parameters depending if its true or not

//then operator is used after the promise is fulfilled 

//catch operator is used if the promise is rejected


/*____________________________________________________________________________________________________________________________________________________________________________________________________
______________________________________________________________________________________________________________________________________________________________________________________________________
______________________________________________________________________________________________________________________________________________________________________________________________________
______________________________________________________________________________________________________________________________________________________________________________________________________
______________________________________________________________________________________________________________________________________________________________________________________________________
______________________________________________________________________________________________________________________________________________________________________________________________________
______________________________________________________________________________________________________________________________________________________________________________________________________
______________________________________________________________________________________________________________________________________________________________________________________________________
______________________________________________________________________________________________________________________________________________________________________________________________________
*/

//regular expressions are used to match, search, and replace text

// the test method searches for a word(s)/character(s). It returns a boolean value. It is case sensitive

let myString = "Hello, World!";
let myRegex = /Hello/;
let result = myRegex.test(myString);

// result will return true

// this will search for multiple words in the string and return a boolean
let petString = "James has a pet cat.";
let petRegex = /dog|cat|bird|fish/; 
let result = petRegex.test(petString);

// you can ignore case sensitivity by putting a the i flag after the word you want to find
let myString = "freeCodeCamp";
let fccCode = /freecodecamp/i;
let result = myString.test(fccCode);

// extracting words can be made possible with .match method
let extractStr = "Extract the word 'coding' from this string.";
let codingRegex = /coding/i; 
let result = extractStr.match(codingRegex); 

// extracting multiple words
let twinkleStar = "Twinkle, twinkle, little star";
let starRegex = /twinkle/ig; 
let result = twinkleStar.match(starRegex); 

// wildcard period will match any take the input and match all the words with that character. If you wanted to match hug, huh, hut, and hum, you can use the regex /hu./ to match all four words.

let exampleStr = "hug, huh, hut,hum";
let unRegex = /un./; 
let result = unRegex.test(exampleStr);

// RegEx can be more flexible when using character classes. You can define a group of characters that you want to find in a string For example, you want to match bag, big, and bug but not bog. You can create the regex /b[aiu]g/ to do this. The [aiu] is the character class that will only match the characters a, i, or u.

let quoteSample = "Beware of bugs in the above code; I have only proved it correct, not tried it.";
let vowelRegex = /[aeiou]/ig; 
let result = quoteSample.match(vowelRegex);
// find all the vowels. has the case insensitive and global flags

// you can define a group of characters alphabetically with the hyphen symbol

let catStr = "cat";
let batStr = "bat";
let matStr = "mat";
let bgRegex = /[a-e]at/;
catStr.match(bgRegex);
batStr.match(bgRegex);
matStr.match(bgRegex);

let quoteSample = "The quick brown fox jumps over the lazy dog.";
let alphabetRegex = /[a-z]/ig; 
let result = quoteSample.match(alphabetRegex);

// this can also be implemented to numbers as well

let quoteSample = "Blueberry 3.141592653s are delicious.";
let myRegex = /[h-s2-6]/ig; // 
let result = quoteSample.match(myRegex); 


// negated character sets are the types of characters you do not want to match. you can achieve this my placing the caret character after the opening bracket and before the character. this returns every other character

let quoteSample = "3 blind mice.";
let myRegex = /[^aeiou0-9]/ig; 
let result = quoteSample.match(myRegex);//negated characters aeiou and numbers 0-9 returned all other characters

//matching characters one or more times with the + character. it returns it the characters and the characters have the appear consecutively  to be matched together

let difficultSpelling = "Mississippi";
let myRegex = /s+/g; 
let result = difficultSpelling.match(myRegex);
//result equals ['ss','ss'] because it separates the the ss with commas when they are not together

// matching characters that appear zero or more times with the * character
let chewieQuote = "Aaaaaaaaaaaaaaaarrrgh";
let chewieRegex = /Aa*/; 

let result = chewieQuote.match(chewieRegex);

// greedy matching finds the longest possible part of a string that fits the regex pattern and returns it as a match. Lazy matching fins the smallest possible part of the string that satisfies the regex pattern with the ? character
let text = "<h1>Winter is coming</h1>";
let myRegex = /<[1h]*?.>/;
let result = text.match(myRegex);

//the caret character (^) outside of the character set ([]) is used to found patterns at the beginning of the strings. This
let rickyAndCal = "Cal and Ricky both like racing.";
let calRegex = /^Cal/; 
let result = calRegex.test(rickyAndCal);
// this will only return true of Cal is at the beginning of the string

// the dollar sign is the find patterns at the end of the string
let caboose = "The last car on a train is the caboose";
let lastRegex = /caboose$/; 
let result = lastRegex.test(caboose);

// there is another shortcut for [a-z] as well as other characters too. \w is equal to [A-Za-z0-9_]
let quoteSample = "The five boxing wizards jump quickly.";
let alphabetRegexV2 = /\w/g; 
let result = quoteSample.match(alphabetRegexV2).length;

// you can also match everything except numbers and letters using \W (capitalized W) is equal to [^A-Za-z0-9_]
let quoteSample = "The five boxing wizards jump quickly.";
let nonAlphabetRegex = /\W+/g; 
let result = quoteSample.match(nonAlphabetRegex).length;

// finding just numbers shortcut with \D
let movieName = "2001: A Space Odyssey";
let numRegex = /\d/g; 
let result = movieName.match(numRegex).length;

//matching all non numbers with \D
let movieName = "2001: A Space Odyssey";
let noNumRegex = /\D/g;
let result = movieName.match(noNumRegex).length;

let username = "z94";
let userCheck = /^[\D][a-z]+[\d]*$|^[a-z]\d\d+$/i;
let result = userCheck.test(username);
console.log(result);

// using \s will find whitespace ,carriage return, tab, form feed, and new line characters
let sample = "Whitespace is important in separating words";
let countWhiteSpace = /\s/g;
let result = sample.match(countWhiteSpace);

// using \S will match anything other than whitespace
let sample = "Whitespace is important in separating words";
let countNonWhiteSpace = /\S/g; 
let result = sample.match(countNonWhiteSpace)

// using the curly brackets ({}) to specify how many characters will want to be found similar to the + and * notations. Known as quantity specifiers
let ohStr = "Ohhh no";
let ohRegex = /oh{3,6} no/i;
let result = ohRegex.test(ohStr);

// specifying the lower numbers of the selected minimum. Keep the first number followed by a comma. {3,} will match a string with at least 3 characters
let haStr = "Hazzzzah";
let haRegex = /haz{4,}ah/i; 
let result = haRegex.test(haStr);

//you can select the exact quantity  of characters you want to matching the curly brackets with without another number and without a comma will accomplish 
let timStr = "Timmmmber";
let timRegex = /tim{4}ber/i;
let result = timRegex.test(timStr);

//checking if there may be a pattern, specify the possible existence of a pattern with the ? symbol
let favWord = "favorite";
let favRegex = /favou?rite/; 
let result = favRegex.test(favWord);

//lookaheads tell the code to look ahead in your string to check for patterns further. Positive lookaheads look search for the pattern but wont match it (?=...) where the ... is the required part that is not matched. Negative lookaheads (?!...) will search if the pattern isnt there the ... part is the pattern you do not want to be there. The rest of the pattern is returned if the negative lookahead part is not present.
let sampleWord = "astronaut";
let pwRegex = /(?=\w{5,})(?=\D+\d{2})/; 
let result = pwRegex.test(sampleWord);
//will test the whole string and not just the patterns given

//checking for mixed group of characters with the brackets (). This is similar the the character sets with the square brackets but more strict (exact letter order and length). If the desired group is in the string then it returns the regEx
let myString = "Eleanor Roosevelt";
let myRegex = /(Franklin D.|Eleanor) Roosevelt/; 
let result = myRegex.test(myString); 

//capture groups are variables for RegEx strings to be used again without repeating them. Using the parentheses, you can define a substring to store. The name of the variable is predefined as 1 and keeps going. You can put a backspace and the number to specify where the string will appear
let repeatNum = "42 42 42";
let reRegex = /^(\d+)\s\1\s\1$/; 
let result = reRegex.test(repeatNum);
//using ^ and $ to assert the end and the start of the amount of times we want to use the strings

//using .replace() replaces the selected pattern to a another pattern of strings. The text that is to be replaced is the first one before the comma and the string replacing it is the on after. You can access your capture groups in the replaced section using the $ sign
let str = "one two three";
let fixRegex = /(\w+)\s(\w+)\s(\w+)/;
let replaceText = "$3 $2 $1"; 
let result = str.replace(fixRegex, replaceText);

// removing whitespace at the end of the beginning of a string
let hello = "   Hello, World!  ";
let wsRegex = /(\s+$)|(^\s+)/g; 
let result = hello.replace(wsRegex, ""); 
console.log(result);

/*____________________________________________________________________________________________________________________________________________________________________________________________________
______________________________________________________________________________________________________________________________________________________________________________________________________
______________________________________________________________________________________________________________________________________________________________________________________________________
______________________________________________________________________________________________________________________________________________________________________________________________________
______________________________________________________________________________________________________________________________________________________________________________________________________
______________________________________________________________________________________________________________________________________________________________________________________________________
______________________________________________________________________________________________________________________________________________________________________________________________________
______________________________________________________________________________________________________________________________________________________________________________________________________
______________________________________________________________________________________________________________________________________________________________________________________________________
*/

//Console log useful information\

//When you run ordinary JavaScript, the browser's console will display your console.log() statements the exact number of times it is called. 

//console clear will clear the console 
//clearing the console and then console logging will mimic the fcc console and not record every log for every test
console.clear();

// using typeof will check the type of variable. There are six primitive (immutable) data types: Boolean, Null, Undefined, Number, String, and Symbol and one type for mutable items: Object.(Arrays are also considered arrays is javascript)

console.log(typeof "");// String
console.log(typeof 0); // Number
console.log(typeof []);// Object
console.log(typeof {});// Object

let seven = 7;
let three = "3";
console.log(seven + three);

console.log(typeof seven);
console.log(typeof three);
//
let myArray = [1, 2, 3];
let arraySum = myArray.reduce((previous, current) =>  previous + current);
console.log(`Sum of array values is: ${arraySum}`);

//REMEMBER TO CLOSE BRACKETS, DO NOT MISTAKE EQUAL OPERATOR TO ASSIGNMENT OPERATOR, PARENTHESIS AFTER CALLING A FUNCTION

/*____________________________________________________________________________________________________________________________________________________________________________________________________
______________________________________________________________________________________________________________________________________________________________________________________________________
______________________________________________________________________________________________________________________________________________________________________________________________________
______________________________________________________________________________________________________________________________________________________________________________________________________
______________________________________________________________________________________________________________________________________________________________________________________________________
______________________________________________________________________________________________________________________________________________________________________________________________________
______________________________________________________________________________________________________________________________________________________________________________________________________
______________________________________________________________________________________________________________________________________________________________________________________________________
______________________________________________________________________________________________________________________________________________________________________________________________________
*/

//revisiting pop() and shift()?
// pop() shift() do not have parameters and only allow the array to be modified by a single element at a time

function popShift(arr) {
  let popped = arr.pop(); 
  let shifted = arr.shift(); 
  return [shifted, popped];
}

console.log(popShift(['challenge', 'is', 'not', 'complete']));

//removing items using splice()
// splice() will remove specific items from  the array whether from the middle or more than one element at a time
//splice takes up to 3 parameters. first two parameters represent indexes and the second parameter represents how many items to remove from there on (array.splice(2,2) will remove the third and fourth item) Splice also returns an array containing the items it has removed
//the third parameter is for any data to replace the removed items, any number of elements can be inserted into the array
function htmlColorNames(arr) {
  arr.splice(0,2, "DarkSalmon", "BlanchedAlmond")
  return arr;
}

console.log(htmlColorNames(['DarkGoldenRod', 'WhiteSmoke', 'LavenderBlush', 'PaleTurquoise', 'FireBrick']));

//copying array items using slice()
//slice() copies or extracts a given number of elements to a new array. It takes two parameters; the starting index for where to begin the extraction and the ending index for where to end (extraction will occur up to, but not including the last element at this index)
function forecast(arr) {
  let updatedFore = arr.slice(2,4); // will not include the 4th element
  arr = updatedFore;
  return arr;
}

console.log(forecast(['cold', 'rainy', 'warm', 'sunny', 'cool', 'thunderstorms']));

//copy an array with the spread operator
//spread allows us to completely copy an entire array in ES6 in order using the "..." syntax
function copyMachine(arr, num) {
  let newArr = [];
  while (num >= 1) {
     newArr.push([...arr]);
    num--;
  }
  return newArr;
}

console.log(copyMachine([true, false, true], 2));


// you can combine arrays with the spread operator. this is more flexible than traditional concatenate arrays
function spreadOut() {
  let fragment = ['to', 'code'];
  let sentence = ['learning', ...fragment, 'is', 'fun']; 
  return sentence;
}

console.log(spreadOut());


// check for the presence of an element with indexOf(), we use this to check if a presence of an element exists in an array. Parameters it takes in are one, it being the element we want to find. It returns the index position of the  element if it does exist, otherwise it returns -1. Note that it will return the first position that the function finds in the array.
function quickCheck(arr, elem) {
  if (arr.indexOf(elem) >= 0) {
   return true;
  } else {
    return false;
  }
}

console.log(quickCheck(['squash', 'onions', 'shallots'], 'mushrooms'));

// iterate through all an arrays items using for loops 
function filteredArray(arr, elem) {
  let newArr = [];

  for (let i = 0; i < arr.length; i++) {
    if (arr[i].indexOf(elem) > -1) {
      arr[i].splice();
    } else {
      newArr.push(arr[i]);
    }
  }
  return newArr;
}

console.log(filteredArray([[3, 2, 3], [1, 6, 3], [3, 13, 26], [19, 3, 9]], 3));




// adding key-value pairs to javascript objects
//objects take values and assign them to keys. these values can be accessed by calling the key respective to their name. you can use dot notation or bracket notation. Use bracket notation if the key name needs to have spaces when assigning a value. 
let foods = {
  apples: 25,
  oranges: 32,
  plums: 28
};

foods.bananas = 13;
foods.grapes = 35;
foods.strawberries = 27;

console.log(foods);

//objects nested in an object can be accessed by using the dot notation like object.nestedObj.superNested = 10;, similar to nested arrays
let userActivity = {
  id: 23894201352,
  date: 'January 1, 2017',
  data: {
    totalUsers: 51,
    online: 42
  }
};

userActivity.data.online = 45;

console.log(userActivity);



// use bracket notation for variables and parameters that are undefined to dot notation
let foods = {
  apples: 25,
  oranges: 32,
  plums: 28,
  bananas: 13,
  grapes: 35,
  strawberries: 27
};

let checkInventory = (scannedItem) => {return foods[scannedItem]};

console.log(checkInventory("apples"));


//delete to delete objects
let foods = {
  apples: 25,
  oranges: 32,
  plums: 28,
  bananas: 13,
  grapes: 35,
  strawberries: 27
};

delete foods.oranges; 
delete foods.plums;
delete foods.strawberries;

console.log(foods);


//checking if an object has a property with hasOwnProperty() or "in" ('alan' in users)

let user = {
  Alan: {
    age: 27,
    online: true
  }
};
let users = {
  Alan: {
    age: 27,
    online: true
  },
  Jeff: {
    age: 32,
    online: true
  },
  Sarah: {
    age: 48,
    online: true
  },
  Ryan: {
    age: 19,
    online: true
  }
};

function isEveryoneHere(userObj) {
  if ('Alan' in userObj && 'Jeff' in userObj && 'Sarah' in userObj && 'Ryan' in userObj) {
    return true;
  } else {
    return false;
  }
}


// using for (... in ...) to check for all objects keys in an array
console.log(isEveryoneHere(user));

function countOnline(usersObj) {
  let n = 0;
  for (let user in usersObj) {
    console.log(usersObj[user].online)
    let status = usersObj[user].online;
    if (status) {
      n++;
    }
  }
  return n;
}


// generate and array of all object keys with Object.keys(). will return an array of all properties inside the object  passed into Object.keys() parameter

let users = {
  Alan: {
    age: 27,
    online: false
  },
  Jeff: {
    age: 32,
    online: true
  },
  Sarah: {
    age: 48,
    online: false
  },
  Ryan: {
    age: 19,
    online: true
  }
};

const getArrayOfUsers = (obj) => {return Object.keys(obj);}
//returns [ 'Alan', 'Jeff', 'Sarah', 'Ryan' ] in no specific order
console.log(getArrayOfUsers(users));


//modifying an array stored in an object

let user = {
  name: 'Kenneth',
  age: 28,
  data: {
    username: 'kennethCodesAllDay',
    joinDate: 'March 26, 2016',
    organization: 'freeCodeCamp',
    friends: [
      'Sam',
      'Kira',
      'Tomo'
    ],
    location: {
      city: 'San Francisco',
      state: 'CA',
      country: 'USA'
    }
  }
};

let addFriend = (userObj, friend) => {
   userObj.data.friends.push(friend);
   return userObj.data.friends;
}

console.log(addFriend(user, 'Pete'));


/*____________________________________________________________________________________________________________________________________________________________________________________________________
______________________________________________________________________________________________________________________________________________________________________________________________________
______________________________________________________________________________________________________________________________________________________________________________________________________
______________________________________________________________________________________________________________________________________________________________________________________________________
______________________________________________________________________________________________________________________________________________________________________________________________________
______________________________________________________________________________________________________________________________________________________________________________________________________
______________________________________________________________________________________________________________________________________________________________________________________________________
______________________________________________________________________________________________________________________________________________________________________________________________________
______________________________________________________________________________________________________________________________________________________________________________________________________
*/

// algorithm for converting celsius into fahrenheit

function convertToF(celsius) {
  let fahrenheit;
  fahrenheit = celsius * 9/5 + 32;
  return fahrenheit;
}

convertToF(30);

//reversing a string 
function reverseString(str) {
  let newStr = "";
  for (let i = str.length - 1; i > -1; i--) {
    newStr += `${str[i]}`;
  }
  return newStr;
}

console.log(reverseString("hello"));
/*split("") splits a string by its characters and puts it into an array
  .reverse() reverses an array
  .join() "joins" an array into a string again*/

//factorializing a number
function factorialize(num) {
  if (num == 0) {
    num = 1;
    return 1;
  } else {
    for (let i = num-1; i > 0; i--) {
      num *= i;
    }
  }
  return num;
}
  
 factorialize(0);

// getting the longest word in a string
function findLongestWordLength(str) {
  let pick = /[a-z]+/ig;
  let string = str.match(pick);
  let arr = [];
  let n = [];
  for (let i = 0; i < string.length; i++) {
    if (i == 0) {

      } else if (string[i].length > string[i - 1].length)  {
      console.log(string[i])
      arr.push(string[i])

    } 
  }
  for (let i = 0; i < arr.length; i++) {
    if (i == 0) {
n.push(arr[i]);
      } else if (arr[i].length > arr[i - 1].length) {
      n.push(arr[i]);

    } 
  }
  return n.pop().length;
}

console.log(findLongestWordLength("May the force be with you"));

//Return largest numbers in arrays
function largestOfFour(arr) {
  let ar = [];
  for (let i in arr) {
    for (let y = 0; y < arr[i].length; y+=1) {
      if (arr[i][y] < arr[i][y + 1] || arr[i][y] < arr[i][y - 1]) {
          arr[i].splice(y,1,)
          y--;
      }

    }
  }
  for (let i in arr) {
    ar.push(arr[i].pop())
    console.log(ar)
  }

  return ar;
}
console.log(largestOfFour([[17, 23, 25, 12], [25, 7, 34, 48], [4, -10, 18, 21], [-72, -3, -17, -10]]));

//See if the given argument for "target" is at the end of "str"

function confirmEnding(str, target) {
  let rex = new RegExp(target + "$","i");
  if (str.match(rex) != null){
    return true;
  } else {
    return false;
  }
}

console.log(confirmEnding("Connor", "n"));

//repeating a string

function repeatStringNumTimes(str, num) {
  var u = str;
  if (num <= 0) {
    return "";
  } else {
  while (num > 1) {
    u += str;
    num--;
  }
  return u;
  }
}

console.log(repeatStringNumTimes("abc", 1));

// trim a string of by however numbers given
function truncateString(str, num) {
  let pick = /.{1}/ig;
  let string = str.match(pick);
  let newStr = "";
  for (let i = 0; i < num; i++) {
    newStr += `${string[i]}`;
  }
  
  if (num >= str.length) {
    return str;
  } else {
    newStr += "..."
  }
  return newStr;
}

console.log(truncateString("Peter Piper picked a peck of pickled peppers", 11));

// passing elements of an array through tests and returning the first the be true
function findElement(arr, func) {
  for (let n in arr) {
    if(func(arr[n])){
      return arr[n];
   } 
  }
  return undefined;
}

console.log(findElement([1, 2, 3, 4], num => num % 2 === 0));

// return true if the value is a boolean 
function booWho(bool) {
  if (typeof bool != 'boolean') {
  return false;
  } else {
    return true;
  }
}

booWho(null);

//capitalizing the first letter of every word
function titleCase(str) {
  str = str.toLowerCase();
  let exp = /\S+/ig
  let cas = /^\w/
  let wsRegex = /(\s+$)|(^\s+)/g; 
  let string = str.match(exp);
  let arr = [];
  str = "";
  for (let words in string) {
    arr.push(string[words].replace(cas, (w) => w.toUpperCase()));
  }
  for (let words in arr) {
    str += `${arr[words]}` + " "
  }
  str = str.replace(wsRegex, ""); 
  return str;
}

console.log(titleCase("HERE IS MY HANDLE HERE IS MY SPOUT"));

// inserting an array into another array after a certain point
function frankenSplice(arr1, arr2, n) {
  let arr20 = [...arr2];
  let newArr = arr20.splice(n,n,...arr1)
  arr20.push(...newArr);
  return arr20;
}

console.log(frankenSplice(["claw", "tentacle"], ["head", "shoulders", "knees", "toes"], 2));

// removing all false values
function bouncer(arr) {
  for (let y = arr.length - 1; y > -1; y--) {  
    if (arr[y] == false || arr[y] == undefined || Number.isNaN(arr[y])){
      console.log(isNaN());
      arr.splice(y,1);
     }
    }
  return arr;
}

console.log(bouncer([false, null, 0, NaN, undefined, ""]));

// returning index num belongs to
function getIndexToIns(arr, num) {
  if (arr.length === 0) {
    return 0;
  }
  let sort = (array) => {
    if (array.length == 1) {
      return array
    }
    const middle = Math.floor(array.length / 2); 
    const left = array.slice(0, middle);
    const right = array.slice(middle);     
    return mSort(
      sort(left),
      sort(right)
   )
  }
  let mSort = (left, right) => {
    let sorted = [];
    let leftI = 0;
    let rightI = 0;
    while (leftI < left.length && rightI < left.length) {
      if (left[leftI] < right[rightI]) {
        sorted.push(left[leftI]);
        leftI++
      } else {
        sorted.push(right[rightI])
        rightI++  
      }
    }
    return sorted.concat(left.slice(leftI)).concat(right.slice(rightI));
  }
  console.log(sort(arr));
  let newArr = sort(arr);
  for (let n = 0; n < newArr.length; n++) {
    if (num == newArr[n]) {
      return n;
    } else if (num > newArr[n] && num < newArr[n+1]) {
      return n + 1;
    } else if (num > newArr[newArr.length - 1]){
      return newArr.length
    }
  }
}

console.log(getIndexToIns([2, 5, 10], 15));

// letters in a word 

function mutation(arr) {
  let letters = arr[1];
  for (let l in letters) {
    let x = new RegExp(letters[l],'i')
    if (x.test(arr[0]) == false) {
      return false;
    }
  }
  return true
}

console.log(mutation(["zyxwvutsrqponmlkjihgfedcba", "qrstu"]));

//spits an array into smaller arrays the length given

/*____________________________________________________________________________________________________________________________________________________________________________________________________
______________________________________________________________________________________________________________________________________________________________________________________________________
______________________________________________________________________________________________________________________________________________________________________________________________________
______________________________________________________________________________________________________________________________________________________________________________________________________
______________________________________________________________________________________________________________________________________________________________________________________________________
______________________________________________________________________________________________________________________________________________________________________________________________________
______________________________________________________________________________________________________________________________________________________________________________________________________
______________________________________________________________________________________________________________________________________________________________________________________________________
______________________________________________________________________________________________________________________________________________________________________________________________________
*/ 


/*OBJECT ORIENTATED PROGRAMMING*/
