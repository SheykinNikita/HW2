#include <iostream>
#include <cmath>

class Point {
public:
    float x;
    float y;

    void setx(float a) {
        x = a;
    }

    void sety(float b) {
        y = b;
    }

    float bar(Point z) {
        std::cout << sqrt(pow(x, 2) + pow(y, 2));
    }
};

int main() {
    Point z;
    z.setx(4);
    z.sety(6);
    z.bar(z);
    return 0;
}

