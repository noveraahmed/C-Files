#include <stdio.h> 

int main(){

// constant = fixed value that cannot be altered by the program
//float pi = 3.14159;
// if we said pi = another number, this will alter result of program
// turn the variable into a constant to prevent it changing the value of the constant 

const float PI = 3.14159;
//make letters uppercase and add "const"

printf("%f", PI);

return 0;
}