//: Playground - noun: a place where people can play
/*
File: Swift Second PlayGround
Author: chenxiaba
Content: Learn function\Class\Enum\Struct\Protocol\Externtions of siwft.
*/

import Cocoa

var str = "Hello, playground"


/*c1.1 func definetion */
func greet(name: String, day: String) ->String {
    return "Hello \(name), \(day)."
}

greet("chenxiaba", "It's a nice day")


/*c1.2 func return multiple values */
func calcStatics(scores: [Int]) ->(min:Int, max:Int, sum:Int) {
    var min = scores[0]
    var max = scores[0]
    var sum = 0
    
    for score in scores {
        if score > max {
            max = score
        }
        
        if score < min {
            min = score
        }
        
        sum += score
    
    }
    
    return (min, max, sum)
}

let statics = calcStatics([5,3,2,7,9,13,58,25,76,35])

print(statics.min)
print(statics.2)

/*Oh, i found usage of the definetion array: scores: [Int] */


/*c1.3 func with a variable number of arguments*/
func sumof(numbers:Int...) -> Int {
    var sum = 0
    
    for number in numbers {
        sum += number
    }
    
    return sum
}

sumof()
sumof(1,2,3,4)


/*c1.4 nested functions */
func returnFifteen() -> Int{
    var y = 100
    
    func add(){
        y += 5
    }
    
    add()
    
    return y
}

returnFifteen()


/*c1.5 func as a return value */
func makeIncrementer() -> (Int -> Int) {
    func addOne(number: Int) ->Int {
        return 1 + number
    }
    
    return addOne
}

var increment = makeIncrementer()

increment(7)


/*c1.6 func as a argument */





























