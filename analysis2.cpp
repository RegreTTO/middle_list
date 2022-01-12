#include "middle_list.h"
void output(int pos,
            int neg,
            int max_pos,
            int max_neg,
            int min_pos,
            int min_neg,
            long long pos_sum,
            long long neg_sum,
            int zeros,
            bool was_pos,
            bool was_neg) {
    if (was_pos && was_neg) {
        printf(
            "Положительные:\t\t\tОтрицательные:\n"
            "Количество чисел: %d,\t\tКоличество чисел: %d,\n"
            "Максимальная цифра: %d,\t\tМаксимальная цифра: %d,\n"
            "Минимальная цифра: %d,\t\tМинимальная цифра: %d,\n"
            "Сумма чисел: %lld,\t\tСумма чисел: %lld,\n"
            "Среднее значение: %.2f\t\tСреднее значение: %.2f\n",
            pos, neg, max_pos, max_neg, min_pos, min_neg, pos_sum, neg_sum,
            (double)pos_sum / (double)pos, (double)neg_sum / (double)neg);
    } else if (!was_pos && was_neg) {
        printf(
            "Отрицательные:\n"
            "Количество чисел: %d,\n"
            "Максимальная цифра: %d,\n"
            "Минимальная цифра: %d,\n"
            "Сумма чисел: %lld,\n"
            "Среднее значение: %.2f\n",
            neg, max_neg, min_neg, neg_sum, (double)neg_sum / (double)neg);
    } else if (was_pos && !was_neg) {
        printf(
            "Положительные:\n"
            "Количество чисел: %d,\n"
            "Максимальная цифра: %d,\n"
            "Минимальная цифра: %d,\n"
            "Сумма чисел: %lld,\n"
            "Среднее значение: %.2f\n",
            pos, max_pos, min_pos, pos_sum, (double)pos_sum / (double)pos);
    }
    printf("Количество нулей: %d", zeros);
}
void itc_pos_neg_analysis_lst(const vector<int>& lst) {
    setlocale(LC_ALL, "Russian");
    if (lst.size() == 0) {
        cout << "И где?";
        return;
    }
    int pos = 0, neg = 0, max_pos = lst[0], max_neg = lst[0], min_pos = lst[0],
        min_neg = lst[0], zeros = 0;
    long long pos_sum = 0, neg_sum = 0;
    bool was_pos = false, was_neg = false;
    for (int i = 0; i < lst.size(); i++) {
        int n = lst[i];
        if (n < 0) {
            neg++, was_neg = 1, neg_sum += n;
            if (n < min_neg)
                min_neg = n;
            if (n > max_neg)
                max_neg = n;
        } else if (n > 0) {
            pos++, was_pos = 1, pos_sum += n;
            if (n < min_pos)
                min_pos = n;
            if (n > max_pos)
                max_pos = n;
        } else {
            zeros++;
        }
    }
    output(pos, neg, max_pos, max_neg, min_pos, min_neg, pos_sum, neg_sum,
           zeros, was_pos, was_neg);
}
