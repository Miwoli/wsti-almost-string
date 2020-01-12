#include <iostream>
#include "new_string.hpp"

int main(int argc, char** argv) {
    std::cout << "New string implementation." << std::endl;

    std::cout << "Type in your string:" << std::endl;
    char text[100];

    std::cin >> text;

    NewString string;

    std::cout << "Lenght: " << string.str_len(text) << std::endl;
    std::cout << "Lower letters count: " << string.lwr_str_cnt(text) << std::endl;
    std::cout << "Upper letters count: " << string.upr_str_cnt(text) << std::endl;
    std::cout << "Digits count: " << string.dgt_str_cnt(text) << std::endl;
    std::cout << "Alphanumeric count: " << string.nalpha_str_cnt(text) << std::endl;

    std::cout << "Type in a char to count: ";
    char toFind;
    std::cin >> toFind;

    std::cout << "Count of char \"" << toFind << "\": " << string.chr_str_cnt(toFind, text) << std::endl;
    std::cout << "Position of char \"" << toFind << "\": " << string.chr_str_pos(toFind, text) << std::endl;
    std::cout << "Position from back of char \"" << toFind << "\": " << string.chr_str_rpos(toFind, text) << std::endl;

    return 0;
}