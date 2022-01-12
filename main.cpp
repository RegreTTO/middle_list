#include "middle_list.h"

using namespace std;

template <class T>
void print_vec(vector<T> arr) {
    for (auto i : arr)
        cout << i << ' ';
    cout << '\n';
}

int main() {
   vector<int>arr = {-1,-2,-3,-4,-5,-6, 0};
   itc_pos_neg_analysis_lst(arr);
}

