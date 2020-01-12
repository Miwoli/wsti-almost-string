#include <iostream>
#include <cctype>
#include "new_string.hpp"

int NewString::str_len(char s[]) {
    int counter = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        counter++;
    }

    return counter;
}

int NewString::lwr_str_cnt(char s[]) {
    int counter = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        if (std::islower(s[i])) {
            counter++;
        }
    }

    return counter;
}

int NewString::upr_str_cnt(char s[]) {
    int counter = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        if (std::isupper(s[i])) {
            counter++;
        }
    }

    return counter;
}

int NewString::dgt_str_cnt(char s[]) {
    int counter = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        if (std::isdigit(s[i])) {
            counter++;
        }
    }

    return counter;
}

int NewString::nalpha_str_cnt(char s[]) {
    int counter = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        if (std::isalnum(s[i])) {
            counter++;
        }
    }

    return counter;
}

int NewString::chr_str_cnt(char c, char s[]) {
    int counter = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == c) {
            counter++;
        }
    }

    return counter;
}

int NewString::chr_str_pos(char c, char s[]) {
    int pos = -1;

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == c) {
            return i;
        }
    }

    return pos;
}

int NewString::chr_str_rpos(char c, char s[]) {
    int pos = -1;

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == c) {
            pos = i;
        }
    }

    return pos;
}