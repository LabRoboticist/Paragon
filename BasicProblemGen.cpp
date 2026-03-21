#include <iostream>
using namespace std;

#include "Ops2string.h" // Containes cmath functions
#include "ArrayofNumbers.h" // Works :)

char nt = 'i'; // int // Number type
const char Ops2[] = {'*', '/', '+', '-', 'p'}; //Pemdas
const char Ops1[] = {'s', 'c', 't', 'r', 'L'}; // Sine, Cosine, Tangent, sqrt(), log, ln
const int SIZE = 5; // Amount numbers that will be used in the equation generated  // Do I want this to be changeable later on?
double listints[SIZE]; // Where all the numbers for problem generation are stored


int main(){

    cout << "What number type do you want to do?\n";
    cout << "Choices: double (d), float (f), integer (i), scientific notation (s)\n";
    cin >> nt;

    Randnum(listints, SIZE, nt); // listints is the array. You do not have to have Array[] as the input! -- copy

    // To desplay 
    for (int i=0; i<SIZE; i++){
        cout << listints[i];
        cout << "\n";
    }

    cout << "\n\n";

    // No random equation - yet
    // Just put together some equation and exicute it
    double retulta = listints[0];
    double resultb = listints[2];
    char opGAMA = Ops2[2];
    cout << "Solve this problem: " << retulta << " " << opGAMA << " " << resultb << "\n";



    //Check answer function? 
    int guess;
    cout << "What is you answer? ";
    cin >> guess;
    int result = Charop2Uop(opGAMA, retulta, resultb); // Does not round correctly // NEED operans to be floats to round :(
    if (guess == result){
        cout << "Correct!";
    }
    else{
        cout << "The answer is: " << result;
        cout << "\n";
    }

    return 0;
}

// COmbinations are staring to be implemented and stacks, trees, or structs might get used


// Fractions might be next - DEfinitly a struct