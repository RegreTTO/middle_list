#include "middle_list.h"

void output(int even,
            int odd,
            int max_even,
            int max_odd,
            int min_even,
            int min_odd,
            long long even_sum,
            long long odd_sum,
            bool was_even,
            bool was_odd) {

    if (was_even && was_odd)
        printf(
            "Количество четных чисел: %9d,\t\tКоличество нечетных чисел: %10d,\n"
            "Максимальная четная цифра: %7d,\t\tМаксимальная нечетная цифра: "
            "%8d,\n"
            "Минимальная четная цифра: %8d,\t\tМинимальная нечетная цифра: %9d,\n"
            "Сумма четных чисел: %14lld,\t\tСумма нечетных чисел: %15lld\n",
            even, odd, max_even, max_odd, min_even, min_odd, even_sum, odd_sum);
    else if (!was_even && was_odd){
        printf(
            "Kоличество нечетных чисел: %10d,\n"
            "Максимальная нечетная цифр: %9d,\n"
            "Минимальная нечетная цифра: %9d,\n"
            "Сумма нечетных чисел: %15lld\n",
            odd, max_odd, min_odd, odd_sum);
    }
    else  
        printf(
            "Kоличество четных чисел: %10d,\n"
            "Максимальная четная цифр: %9d,\n"
            "Минимальная четная цифра: %9d,\n"
            "Сумма четных чисел: %15lld\n",
            even, max_even, min_even, even_sum);            
}

void itc_odd_even_analysis_lst(const vector<int>& lst) {
    setlocale(LC_ALL, "Russian");
    int even = 0, odd = 0, max_even = -999999999, max_odd = -999999999,
        min_even = 999999999, min_odd = 999999999;
    long long even_sum = 0, odd_sum = 0;
    bool was_even = false, was_odd;
    for (int i = 0; i < lst.size(); i++) {
        int n = lst[i];
        if (n % 2 == 0) {
            was_even = true;
            even++;
            if (max_even < n)
                max_even = n;
            if (min_even > n)
                min_even = n;
            even_sum += n;
        } else {
            was_odd = true;
            odd++;
            if (max_odd < n)
                max_odd = n;
            if (min_odd > n)
                min_odd = n;
            odd_sum += n;
        }
    }
    if(lst.size() == 0)cout<<"Где данные? :)";
    else
        output(even, odd, max_even, max_odd, min_even, min_odd, even_sum, odd_sum, was_even, was_odd);
}
