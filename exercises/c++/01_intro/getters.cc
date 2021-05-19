/**
 * @file getters.cc
 * @brief Reads from stdin until a valid number is fed
 *
 * @author Marco Franzon
 * @date 01/05/21
 */

#include <iostream>
#include <string>

int get_int(){

    std::cout << "Insert an integer" << std::endl;

    int i;
    while(!(std::cin >> i)){
        std::cout << "Invalid input\n";
        std::cin.clear();
        std::cin.ignore();
    }

    std::cout << "You have fed: " << i << std::endl;

    return i;
}


double get_double(){

    std::cout << "Insert a double" << std::endl;

    double d;
    while(!(std::cin >> d)){
        std::cout << "Invalid input\n";
        std::cin.clear();
        std::cin.ignore();
    }

    std::cout << "You have fed: " << d << std::endl;

    return d;
}




int main(){

    get_int();

    get_double();

    return 0;
}
