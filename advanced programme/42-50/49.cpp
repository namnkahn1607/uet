// adv-programme.49
#include <iostream>
using namespace std;

class Rectangle {
    int height, length;
public:
    Rectangle() : height(0), length(0) {}

    Rectangle(int h, int l) : height(h), length(l) {}

    int getPerimeter() {
        return 2 * (height + length);
    }

    void print() {
        for (int i = 0; i < height; ++i) {
            if (i == 0 or i == height - 1)
                cout << string(length, '*') << '\n';
            else
                cout << '*' << string(length - 2, ' ') << "*\n";
        }
    }
}

int compare(Rectangle a, Rectangle b) {
    int diff = a.getPerimeter() - b.getPerimeter();

    if (diff < 0) return -1;
    if (diff > 0) return 1;

    return 0;
}

int main() {}