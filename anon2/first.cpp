/**

Welcome to GDB Online. GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl, C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog. Code, Compile, Run and Debug online from anywhere in world.

***/ 

#include <stdio.h>
#include <iostream>

int main(){
  std::string input = "";
  std::cout << "Type something: ";
  
  std::cin >> input;
  if(input == "Something" || input == "something") { 
    std::cout << "Well done ;)";
  } else {
    std::cout << "You typed: " << input;
  }

  input = "";
  std::cout << "Pokemon Red was released for the N64, True or False"
  std::cin >> input;
  if(input == "False") {
    std::cout << "Correct it was made for the GameBoy";
  } else {
    
  }
  return 0;
}
