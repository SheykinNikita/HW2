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

    float getx() {
        return x;
    }

    float gety() {
        return y;
    }
};

class Polar {
private:
    float r;
    float phi;
public:
    void setCord(Point a) {
        r = sqrt(pow(a.getx(),2) + pow(a.gety(),2));
        phi = atan(a.getx()/a.gety());
    }

    void print() {
        std::cout << r << ' ' << phi << std::endl;
    }
};

int main() {
    Point a;
    a.setx(5);
    a.sety(6);
    Polar b;
    b.setCord(a);
    b.print();
    return 0;
}

