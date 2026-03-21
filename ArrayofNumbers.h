#ifndef Numbers

#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

// !!! The array type determines the number variable's type !!! ( itn array -> int array[i])

void Randnum(double iarr[], int size, char nt){ 
    
    srand(time(0)); // Initilize randomization 

    switch(nt){
        case 'i': // int
            for (int i=0; i<size; i++){  // Only produces integers
                iarr[i] = (int)(rand() / 1000000); //Could maek this moduler inorder to change difficulty (like 1-> 1000000...)
            }
            break;
        case 'd': // double
            for (int i=0; i<size; i++){  // Only produces integers
                iarr[i] = (double)rand() / RAND_MAX;  // iarr[i] = (double)(rand() / 1000000); //Could maek this moduler inorder to change difficulty (like 1-> 1000000...)
            }
            break;
        case 'f': // float 
            for (int i=0; i<size; i++){  // Only produces integers
                iarr[i] = (float)(rand() / 1000000); //Could maek this moduler inorder to change difficulty (like 1-> 1000000...)
            }
            break;

        // BUG - when numbers get to big the output becomes negative (when two big positives are added together)
        case 's': // scientific notation (I believe) 
            for (int i=0; i<size; i++){  
                iarr[i] = rand(); // default output
            }
            break;
        default: 
            cout << "Invalid number data type...";
    }

}



    // Testing Code

// Testing - Remove for header file
// This is how would be exictured inside a different file when using this file as a header file
// int main(){
//     int SIZE = 20; // Can be changed to any number! :)
//     int listints[SIZE];
//     Randnum( listints, SIZE); // listints is the array. You do not have to have Array[] as the input!

//     for (int i=0; i<SIZE; i++){
//         cout << listints[i];
//         cout << "\n";
//     }
// }

#define Numbers
#endif