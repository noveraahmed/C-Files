#include <stdio.h> 
#include <stdbool.h> // to work w/ bools

int main(){
// format specifier % = defines and formats a type of data to be displayed

/*

%c = character
%s = stirng (array of characters)
%f = float
%lf = double
%d = integer

%.1 = decimal precision - for floats and doubles
%1 = minimum field width - to display output
%- = left align - output
*/

float item1 = 5.79;
float item2 = 2.00;
float item3 = 100.392;

printf("Item 1: $%.2", item1);
printf("Item 1: $%.2", item2);
printf("Item 1: $%.2", item3);

// printf("Item 1: $%8.2", item1); - width is 8, decimal point is 2

 return 0; 
 }