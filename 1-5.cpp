#include "middle_list.h"

vector <char> ft_strtlist(string str){
    vector<char> answ(str.size());
    for(size_t i = 0; i<str.size();i++)
        answ[i] = str[i];
    return answ;
}

string ft_join(vector <char> lst, string sep){
    string answ = "";
    for(int i = 0;i<lst.size();i++){
        answ+=lst[i];
        if(i < lst.size()-1)answ+=sep;
    }
    return answ;
}

