#ifndef NEW_STRING_HPP
#define NEW_STRING_HPP

class NewString {
    public:
        int str_len(char s[]);
        int lwr_str_cnt(char s[]);
        int upr_str_cnt(char s[]);
        int dgt_str_cnt(char s[]);
        int nalpha_str_cnt(char s[]);
        int chr_str_cnt(char c, char s[]);
        int chr_str_pos(char c, char s[]);
        int chr_str_rpos(char c, char s[]);
};

#endif