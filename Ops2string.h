#ifndef Opbiandsi // To make this a header file

#include <cmath>
#include <iostream>
using namespace std;
// Testing Values
// char Operator = '+';
// char OperanA = 3;
// char OperanB = 9;


//only for binary operators
double Charop2Uop(char op,double a, double b){ // Character Version of operator to usable version of operator
    switch(op){ // PEMDAS
        case '*':
            return(a*b);
            // break;
        case '/':       
            return(round(a/b));
            // break;
        case '+':
            return(a+b);
            // break;
        case '-':
            return(a-b);
            // break;
        case 'p': // a to the power of b
            return(pow(a, b));
        default:
            cout << "You stupid"; // This should not be the users fault. So if  this happens, you actually did something stupid.
            return 0; // Do this or the computer will trhow a fit
    }
}

double Charop1Uop (char op, int a){ // String version of singlet operator to usable operator
    // mybe add something to check if a is a radian or in degree? like make a sperate variable for pi?
    switch(op){
        case 's': // sine
            return(sin(a));
        case 'c': // cossine
            return(cos(a));
        case 't': // tangent
            return(tan(a));
        case 'r': // sqrt()
            return(sqrt(a));
        case 'L':
            return(log(a));
        default:
            cout << "you stupid";
            return 0;
    }
}


    // Testing Code

// int main(){
//     //char opl; // delete
//     //cin >> opl; // delete
//     double result = Charop2Uop(Operator, OperanA, OperanB);
//     cout << result;
//     cout << "\n";
//     double resultsin = Charop1Uop('s', OperanA);
//     cout << resultsin;

//     return 0;
// }

#define Opbiandsi
#endif