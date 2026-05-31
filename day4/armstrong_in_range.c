#include <stdio.h>
#include <math.h>
int main() {
    int start, end, num, originalNum, remainder, n;
    double result;

    printf("Enter start and end range: ");
    scanf("%d %d", &start, &end);

    printf("Armstrong numbers between %d and %d are: ", start, end);
    for (num = start; num <= end; num++) {
        originalNum = num;
        n = 0;
        result = 0.0;

        while (originalNum != 0) {
            originalNum /= 10;
            ++n;
        }

        originalNum = num;
        while (originalNum != 0) {
            remainder = originalNum % 10;
            result += pow(remainder, n);
            originalNum /= 10;
        }

        if ((int)result == num)
            printf("%d ", num);
    }
    return 0;
}
