#include <iostream>
#include <cmath>

class Date {
private:
    int Day;
    int Month;
    int Year;
    int t = 0;
public:
    void setDay(int a) {
        if (t == 2) {
            if (a >= 1 && a <= 31) {
                Day = a;
        }
            else
                std::cout << "Incorrect Day" << std::endl;
        }
        else
            std::cout << "Error" << std::endl;
    }

    void setMonth(int b) {
        Month = b;
        t++;
    }

    void setYear (int c) {
        Year = c;
        t++;
    }

    float bar() {
        std::cout << Day << '.' << Month << '.' << Year << std::endl;
    }
};

int main() {
    Date z;
    z.setDay(5);
    z.setMonth(6);
    z.setYear(2018);
    z.setDay(98);
    z.setDay(12);
    z.bar();
    return 0;
}

