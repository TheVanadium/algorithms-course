#include <stdio.h>

// Coded by Garret Castro 
// Pseudocoded/Structured in collaboration with Siddharth Krishna and Krisna Velicheti
// Received pseudocode/structuring feedback from Altynay Smagulova

// Question: who to cite for contributions? Do I need to cite the teacher after asking this question?

int main(int argc, char *argv[]) {
    int counter = 1;
    int even_sum = 0;
    int odd_sum = 0;
    int even_count = 0;
    int odd_count = 0;

    while (1) {
        const char ORDINAL_SUFFIXES[10][2] = {{'t', 'h'}, {'s', 't'}, {'n', 'd'}, {'r', 'd'}, {'t', 'h'}, {'t', 'h'}, {'t', 'h'}, {'t', 'h'}, {'t', 'h'}, {'t', 'h'}};
        
        int last_two_digits = counter % 100;
        if (last_two_digits >= 11 && last_two_digits <= 13) printf("Enter the %dth value: ", counter);
        else printf("Enter the %d%c%c value: ", counter, ORDINAL_SUFFIXES[counter % 10][0], ORDINAL_SUFFIXES[counter % 10][1]);

        int input;
        scanf("%d", &input);

        if (input == 0) break;

        int input_digit_sum = 0;
        int is_negative = (input < 0) ? 1 : 0;
        if (is_negative) input *= -1;
        for (int i = input; i > 0; i /= 10) input_digit_sum += i % 10;
        if (is_negative) input *= -1;

        if (input_digit_sum % 2 == 0) {
            even_sum += input;
            even_count++;
        } else {
            odd_sum += input;
            odd_count++;
        }

        counter++;
    }

    float even_average = (float)even_sum/even_count;
    float odd_average = (float)odd_sum/odd_count;

    printf("\n");
    if (even_count > 0) printf("Average of input values whose digits sum up to an even number: %.2f\n", even_average);
    if (odd_count > 0) printf("Average of input values whose digits sum up to an odd number: %.2f\n", odd_average);
    if (even_count == 0 && odd_count == 0) printf("There is no average to compute.\n");

    return 0;
}