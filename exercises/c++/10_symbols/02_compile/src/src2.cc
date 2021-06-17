//Wrong version

// #include <iostream>
// #include "utility.h"
//
// std::string greetings(){
//   std::string s{"Good afternoon\n"};
//   return s;
// }
//
// void print_lower(const std::string& s){
//   std::cout << to_lower(greetings()) << to_lower(s) << std::endl;
// }

//Correct

#include <iostream>
#include "utility.h"

static std::string greetings(){
  std::string s{"Good afternoon\n"};
  return s;
}

void print_lower(const std::string& s){
  std::cout << to_lower(greetings()) << to_lower(s) << std::endl;
}
