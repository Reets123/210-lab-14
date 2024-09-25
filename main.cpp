// Lab 14: Color Class
// COMSC-210 - Ibrahim Alatig 

#include <iostream>
#include <iomanip>

using namespace std;

class Color {
    private:
    int red;
    int green; 
    int blue;

public:
    // contructor
    Color() : red(0), green(0), blue(0) {}

    Color(int r, int g, int b) : red(r), green(g), blue(b){}

    void setRed(int r) {
        red = r;
    }

    void setGreen(int g) {
        green = g;
    }

    void setBlue(int b){
        blue = b;
    }


}