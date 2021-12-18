#include <stdio.h> 

int main(){

          // This is a comment 
          /* escape sequence = character combination consisting of a backslash \
               followed by a letter or combination of digits. 
               They specify actions within a line or string of text. 
                \ n = newline
                \ t = tab
          */

          printf("You kept me like a secret\n");
          printf("But I kept you like an oath\n");
          printf("1\t2\t3\t4");
          printf("\"I like Pizza \" - Hello");

          /* variable = allocated space in memory to store a value. 
                We refer to a variable's name to access the stored value. 
                That variable now behaves as if it was the value it contains. 
                But we need to declare what type of data we are storing. 
           declaration and initialization
           Need to put in data type
          */

         int x;               //declaration
         x = 123;             //initialization
         int y = 123;         //declaration and initialization

         int age = 21;        //integer
         float gpa = 2.05;    //floating point number
         char grade = 'C';    //single character
         char name[] = "Bro"; //array of characters 

         
          printf("It's suppose to be fun turning %d\n", age);
          printf("Hello %s\n", name);
          printf("Your average grade is %c\n", grade);
          printf("Your gpa is %f", gpa);
          
          return 0;

          

}
