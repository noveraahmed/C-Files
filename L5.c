#include <stdio.h> 

int main(){

// arithmetic operators
/*  + 
    -
    * (multiplication)
    / (division)
    % (modulus)
    ++ increment
    -- decrement

    */

int x = 5;
int y = 2;

int z = x / y; //returns int
float z = x / y; //returns float

float z = x / (float) y; 

int z = x % y; // remainder of division

x++; // returns 6
y--; // returns 1 

//////////////////////////////////////////////////////////////

// augmented assignment operators = used to replace a statement where an operator takes a variable as one of its arguments and then assigns the result back to the same variable 

// x = x+1
// x+=1 

int n = 10;

// n = n + 2;
// n += 2

//n = n-3;
//n -= 3;

//n = n*4;
//n*=4;

return 0;
}