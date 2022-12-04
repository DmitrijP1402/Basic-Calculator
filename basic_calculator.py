"""********************************************
date:      "17.10.2022"
authors:   "DmitrijP1402"
filename:  "basic_calculator.py"
********************************************"""

print('Basic Calculator')

print('plus = 1, minus = 2, multiplied = 3,  divided = 4') #Output for calculation
calculationType = int(input())

print('enter first number:')
firstNumber = float(input())

print('enter second number:')
secondNumber = float(input())

if calculationType == 1:    #plus
    print(firstNumber, '+',secondNumber,'=', firstNumber+secondNumber)

if calculationType == 2:    #minus
    print(firstNumber, '-',secondNumber,'=', firstNumber-secondNumber)

if calculationType == 3:    #multiplied
    print(firstNumber, '*',secondNumber,'=', firstNumber*secondNumber)

if calculationType == 4:    #divided
    print(firstNumber, ':',secondNumber,'=', firstNumber/secondNumber)
