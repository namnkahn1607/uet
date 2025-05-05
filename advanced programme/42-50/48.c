// adv-programme.48
#include <stdio.h>

char* graduate(float CGPA) {
    char* s = "Xuat sac", *a = "Gioi", *b = "Kha", *c = "Trung binh", *d = "Khong ra duoc truong";

    if (CGPA >= 3.6f) return s;
    if (CGPA >= 3.2f) return a;
    if (CGPA >= 2.5f) return b;
    if (CGPA >= 2.0f) return c;
    
    return d;
}

int main() {
    float CPGA; scanf("%f", &CPGA);

    printf("%s\n", graduate(CPGA));

    return 0;
}