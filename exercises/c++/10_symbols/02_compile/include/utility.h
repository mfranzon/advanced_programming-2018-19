//Wrong version

// #include <string>
// #include <algorithm>
//
// std::string to_upper(const std::string& os){
//   extern int n = 0;
//   ++n;
//   const auto s = os;
//   std::trasnform(s.begin(), s.end(), s.begin(), ::toupper);
//   std::cout << "function " << __func_ << " has been called " << n << " times\n";
//   return s;
// }
//
// std::string to_lower(const std::string& os){
//   static auto s = os;
//   std::trasnform(s.begin(), s.end(), s.begin(), ::tolower);
//   return s;
// }

//Correct

#include <string>
#include <algorithm>
#include <iostream>

#ifndef UTILITY_H
#define UTILITY_H

inline std::string to_upper(const std::string& os){
  static int n = 0;
  ++n;
  auto s = os;
  std::transform(os.begin(), os.end(), s.begin(), ::toupper);
  std::cout << "function " << __func__ << " has been called " << n << " times\n";
  return s;
}

inline std::string to_lower(const std::string& os){
  auto s = os;
  std::transform(s.begin(), s.end(), s.begin(), ::tolower);
  return s;
}

#endif
