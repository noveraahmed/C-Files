#include <stdio.h> 
#include <stdbool.h> // to work w/ bools

int main(){
  
  char a = 'C';       // single character %c 
  char b[] = "Hello"; //array of character %s 

  float c = 3.14;              // 4 bytes (32 bits) 6-7 digits %f 
  double d = 2.293029031203923;  // 8 bytes (64 bit) 15-16 digits, uses more memory %1f
  
  bool e = true;      // 1 byte (true 1 or false 0) %d

  char f = 100; // 1 byte (-128 to +127) %d or %c ASCII Table, signed
  unsigned char g = 225; // 1 byte (0 to +255) %d or %c, doubles w/ positive numbers - doubles range of positive number

  short int h = 32232; //2 bytes (-37768 to +32767) %d
  unsigned short int i = 64678; // 2 bytes (0 to +65353) %d 

  int j = 23992323; //  4 byters (only whole numbers), 2 bil range %d 
  unsigned int k = 3908394234; // (o to 4 bil) 4 bytes %u

  long long int l = 294823948332424; // 8 bytes (-9 quint to 9 quint) %lld 
  unsigned long long int m = 2842394839484340344U; // 8 bytes (0 to +18 quint) %llu

  // printf("%f\n", c);    // template 

  return 0; 
}
