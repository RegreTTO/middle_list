#include "middle_list.h"

vector <char> itc_strtlist(string str){
    vector<char> answ(str.size());
    for(size_t i = 0; i<str.size();i++)
        answ[i] = str[i];
    return answ;
}

string itc_join(vector <char> lst, string sep){
    string answ = "";
    for(int i = 0;i<lst.size();i++){
        answ+=lst[i];
        if(i < lst.size()-1)answ+=sep;
    }
    return answ;
}

string itc_rmstrspc(string str){
    string new_s = "";
    for (int i = 0; i<str.size(); i++){
        if(str[i]!=' '){
            new_s+=str[i];
        }
    }
    return new_s;
}


string itc_rmstrchar(string str, string l){
    string new_s;
    for(int i = 0;i<str.size(); i++){
        bool is_banned = false;
        for(int j = 0; j < l.size() && !is_banned;j++){
            if(str[i] == l[j])
                is_banned = true;
        }
        if(!is_banned)new_s+=str[i];

    }
    return new_s;
}
long long itc_sumlst(const vector <int> &lst){
    
    long long sum = 0;
    for(int i = 0; i < lst.size(); i++ ){
        sum += lst[i];
    }
    return sum;
}
