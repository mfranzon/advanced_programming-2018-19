/**
 * @file avoid.cc
 * @brief Reads words from stdin, prints it without repetitions.
 *
 * @author Marco Franzon
 * @date 07/05/21
 */

#include<iostream>
#include<vector>
#include<string>
#include<algorithm>


int main() {

  std::string line, tmp;
  std::vector<std::string> text;

  while(std::getline(std::cin, line)){
    text.push_back(line);
  }

  std::sort(text.begin(), text.end());

  for (unsigned int i{0}; i < text.size(); i++){

    if (tmp != text[i]) std::cout << text[i] << std::endl;

    tmp = text[i];

  }

}
