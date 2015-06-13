//: Playground - noun: a place where people can play

import Cocoa

var str = "Hello, Swift playground"

/*c1: a constent value*/
let proTag = "[Hello Swift APP]: "

print(proTag + str)


/*c2: compiler can't infer this type*/
let explictDouble :Double = 70


/*c3: convert type */
let lable = "The width is "
let width = 60
let widthlable = lable + String(width) + "."


/*c3.2 use \() */
let widthLable2 = "The width is \(width)."


/*c4. array */
var fruitList = ["apple", "banana", "nothing"]

fruitList[2] = "water mellon"

print(fruitList)


/*c5. dict */
var shoopingList = [
    "food": "rice",
    "drink": "wine",
    "cloth": "hat"
]

shoopingList["food"]

shoopingList["cloth"] = "coat"

print(shoopingList)


/*c6.0 create an empty array */
var emptyArray = [String]()

/*c6.1 create an empty dict */
var emptyDict = [String:Double]()


/*c6.3 if type info can be inferd */
var inferArray = []
var inferDict = [:]
/*But how to use? */

/*c7. if/switch for-in for while repeat-while */
for fruilt in fruitList {
    print(proTag + fruilt)
}


/*c8 optional if-let */
var optionalString: String? = "Hello"
print(optionalString == nil)

var optionalName: String? = "Chenxiaba"
optionalName = nil

var greeting = "Hello!"

if let name = optionalName {
    greeting = "Hello, \(name)"
}


/*c9 switch-case let */
let vegetable = "read pepper"

switch vegetable {
case "celery":
    let vagetableComment = "Add some raisins and make ants on a log"

case "cucumber", "watercress":
    let vagetableCommet = "That would make a good tea sandwich"

case let x where x.hasSuffix("pepper"):
    let vegetableComment = "Is it a spicy \(x)?"
    
default:
    let vegetableComment = "Everything tastes good in soup."
}

/*c10 for-in */
let interestingNumbers = [
    "Prime" : [2,3,5,7,11,13],
    "Fibonacci": [1,1,2,3,5,8],
    "Square": [1,4,9,16,25],
]

var largest = 0
var type = "";

for (kind, numbers) in interestingNumbers{
    for number in numbers {
        if number > largest {
            largest = number
            type = kind
        }
    }
}

print("The largest number is\(largest),type is " + type)


/*c11 while */






