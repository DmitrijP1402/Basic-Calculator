/********************************************
date:      "17.10.2022"
authors:   "DmitrijP1402"
filename:  "basic_calculator.cpp"
********************************************/

#include <iostream>
#include <math.h>


using namespace std;

int main()
{
    int calculationType = 0;
    float firstNumber = 0;
    float secondNumber = 0;

    cout << " Basic Calculator" << endl;

    while (true)
    {

        cout << endl;   //Output for calculation
        cout << " plus = 1, minus = 2, multiplied = 3,  divided = 4, root = 5, squared = 6" << endl;
        cout << " enter the calculation type: ";
        cin >> calculationType;
        cout << " enter first number: ";
        cin >> firstNumber;


        if ( calculationType != 5)  //enter second number if calculationType is not root
        {
            cout << " enter second number: ";
            cin >>secondNumber;
            cout << endl;
            cout << " result:" << endl;
        }

        if (calculationType == 1)   //plus
        {
            cout << " " << firstNumber << " + " <<secondNumber << " = ";
            cout << firstNumber +secondNumber << endl;
        }

        if (calculationType == 2)   //minus
        {
            cout << " " << firstNumber << " - " <<secondNumber << " = ";
            cout << firstNumber -secondNumber << endl;
        }

        if (calculationType == 3)   //multiplied
        {
            cout << " " << firstNumber << " * " <<secondNumber << " = ";
            cout << firstNumber*secondNumber << endl;
        }

        if (calculationType == 4) //divided
        {
            cout << " " << firstNumber << " : " <<secondNumber << " = ";
            cout << firstNumber /secondNumber << endl;
        }

        if (calculationType == 5)   //root
        {
            cout <<  endl;
            cout << " sqrt(" << firstNumber << ")" << " = ";
            cout << sqrt(firstNumber) << endl;
        }

        if (calculationType == 6)       //squared
        {
            float squaredResult = 0;
            squaredResult = firstNumber;

            for (int forLoopNumber = 0; forLoopNumber <secondNumber - 1; forLoopNumber++)
            {

                squaredResult = firstNumber * squaredResult;

            }
            cout << " " << firstNumber << "^" <<secondNumber << " = " << squaredResult;
            cout << endl;
        }

    }
}
