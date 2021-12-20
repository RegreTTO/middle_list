#pragma once
#include <iostream>

using namespace std;

vector <char> ft_strtlist(string str);
string ft_join(vector <char> lst, string sep);
string ft_rmstrspc(string str);
string ft_rmstrchar(string str, string less);
long long ft_sumlst(const vector <int> &lst);
long long ft_sum_even_lst(const vector <int> &lst);
long long ft_sum_even_part_lst(const vector <int> &lst);
void lft_odd_even_separator_lst(const vector <int> &lst, vector <int> &lst1, vector <int> &lst2);
void ft_pos_neg_separator_lst(const vector <int> &lst, vector <int> &lst1, vector <int> &lst2, vector <int> &lst3);
void ft_odd_even_analysis_lst(const vector <int> &lst);
void ft_pos_neg_analysis_lst(const vector <int> &lst);
