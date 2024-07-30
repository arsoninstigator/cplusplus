// Learning C++ and creating short projects combining my skills to allow people to ask certain questions


// Writing a program to allow students to enter a number and get it's square in return
#include <iostream>
#include <cmath>
using namespace std;

int main(){
  int number = 5;
  float square = pow(number, 2);

  cout << " the square of the number " <<  number << " is: " << square << endl;
  return 0;
}
