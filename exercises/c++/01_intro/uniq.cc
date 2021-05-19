/**
 * @file uniq.cc
 * @brief Implementation of 'uniq -c' command
 *
 * @author Marco Franzon
 * @date 01/05/21
 */


#include <iostream>
#include <string>

void uniq(){

    std::string line;
    std::string tmp;
    int count = 1, cond = 0;

    while(std::getline(std::cin,line)){

        if (tmp==line){
            count += 1;
        } else if (cond == 0){
            tmp = line;
            cond = 1;
            continue;
        } else {
            std::cout << count << "\t" << tmp <<std::endl;
            count = 1;
        }

        tmp = line;

    } std::cout << count << "\t" << tmp <<std::endl;

}


int main(){

    uniq();
    return 0;
}
