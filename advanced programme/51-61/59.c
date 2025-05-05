// adv-programme.59
#include <stdio.h>

int digitSum(int num) {
    int sum = 0;

    while (num) {
        sum += num % 10;
        num /= 10;
    }

    return sum;
}

int main() {
    int N, K, x;
    scanf("%d %d", &N, &K);

    int cnt = 0;

    for (int i = 0; i < N; ++i) {
        scanf("%d", &x);

        if (digitSum(x) % K == 0)
            ++cnt;
    }

    printf("%d\n", cnt);

    return 0;
}