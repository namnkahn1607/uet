// adv-programme.6
#include <stdio.h>
#include <algorithm>
#include <vector>
using namespace std;

struct Student {
    int id;
    float math, physic, english;
    float mean;

    Student(int i, float m, float p, float e) : id(i), math(m), physic(p), english(e) {
        mean = (math + physic + english) / 3;
    }

    void printMPE() {
        printf("%d %.1f %.1f %.1f\n", id, math, physic, english);
    }

    void printAll() {
        printf("%d %.1f %.1f %.1f %.1f\n", id, mean, math, physic, english);
    }
};

void mathOrder(vector<Student> arr) {
    std::sort(begin(arr), end(arr), [](Student a, Student b) {
        return a.math > b.math;
    });
    
    printf("%s\n%s\n", "Theo diem mon Toan:", "SV Toan Ly Anh");

    for (Student &s : arr)
        s.printMPE();
}

void engOrder(vector<Student> arr) {
    std::sort(begin(arr), end(arr), [](Student a, Student b) {
        return a.english > b.english;
    });
    
    printf("%s\n%s\n", "Theo diem mon Anh:", "SV Toan Ly Anh");

    for (Student &s : arr)
        s.printMPE();
}

void meanOrder(vector<Student> arr) {
    std::sort(begin(arr), end(arr), [](Student a, Student b) {
        return a.mean > b.mean;
    }); 

    printf("%s\n%s\n", "Theo diem trung binh:", "SV TB Toan Ly Anh");

    for (Student &s : arr)
        s.printAll();
}

int main() {
    int N; scanf("%d", &N);
    vector<Student> arr;

    auto checkScore = [](float x) {
        return 0 <= x and x <= 10;
    };

    for (int i = 0; i < N; ++i) {
        float a, b, c;
        scanf("%f %f %f", &a, &b, &c);
        
        if (!checkScore(a) or !checkScore(b) or !checkScore(c)) {
            printf("%s\n", "invalid");

            return 0;
        }

        arr.emplace_back(Student(i + 1, a, b, c));
    }

    mathOrder(arr);
    engOrder(arr);
    meanOrder(arr);

    return 0;
}