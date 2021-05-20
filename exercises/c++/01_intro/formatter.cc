/**
 * @file formatter.cc
 * @brief Implements a simple text formatter
 *
 * Breaks the lines longer than a given number of characters, does not
 * brake words.
 *
 * @author Marco Franzon
 * @date 01/05/21
 *
 */

#include <iostream>
#include <string>




void split_line(unsigned int n, std::string line){

  /*!
   * Recursively splits a line until linelengh < n and prints it.
   *
   * @param n linelengh threshold
   * @param line line to be splitter
   *
   * @return none
   */

    int pos;
    std::string newline;

    for(pos = n; pos >= 0; --pos) {

        if (line[pos] == ' '){

            std::cout << pos << "\t" << line.substr(0, pos) << std::endl;
            newline = line.substr(pos + 1, line.size());

            if (newline.length() > n) {

                split_line(n, newline);

            } else {

                std::cout << newline.length() << "\t" << newline << std::endl;

            }
            break;
        }

        if (pos == 0) std::cout << line.length() << "\t" << line << std::endl;
    }

}



void formatter(unsigned int n){

  /*!
   * Reads from the stdin line by line, checking if it needs to be splitted. If so,
   * calls split_line to split it, adding the linelenght in front of the text.
   *
   * @param n linelengh threshold
   *
   * @return none
   */


    std::string line;

    while(std::getline(std::cin,line)){
        if (line.length() > n) {
            split_line(n, line);
        } else std::cout << line.length() << "\t" << line << std::endl;
    }
}





int main(){

    formatter(49);
    return 0;
}
