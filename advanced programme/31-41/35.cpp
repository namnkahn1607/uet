// adv-programme.35
#include <iostream>
#include <cmath>
using namespace std;

struct Point {
    double x, y;

    Point() : x(0.0), y(0.0) {}

    Point(double _x, double _y) : x(_x), y(_y) {}

    Point(const Point &_p) : x(_p.x), y(_p.y) {}
};

double distance(Point a, Point b) {
    return sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
}

class Triangle {
    Point p1, p2, p3;
public:
    Triangle(const Point &a, const Point &b, const Point &c) : p1(a), p2(b), p3(c) {}

    double getPerimeter() const {
        return distance(p1, p2) + distance(p2, p3) + distance(p3, p1);
    }

    double getArea() const {
        double halfP = getPerimeter() / 2;

        return sqrt(halfP * (halfP - distance(p1, p2)) * (halfP - distance(p2, p3)) * (halfP - distance(p3, p1)));
    }
};

int main() {}