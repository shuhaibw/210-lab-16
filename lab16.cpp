// COMSC-210 | Lab 16 | Shuhaib Walahi

#include <iostream>
#include <iomanip>

using namespace std; 

class Color
{
    private:
        int red;
        int blue; 
        int green;

    public:
        // the 3 getters
        int getRed() const {return red;}
        int getGreen() const {return green;}
        int getBlue() const {return blue;}

        // default contructor
        Color()
        {
            red = 0;
            green = 0;
            blue = 0;
        }

        // parameter constructor
        Color(int r, int g, int b)
        {
            red = r;
            green = g;
            blue = b;
        }

        // partial constructor
        Color(int r)
        {
            red = r;
            green = 255;
            blue = 255;
        }

        // method for printing 
        void print() const
        {
            cout << "Red: " << setw(3) << red << ", "
            << "Green: " << setw(3) << green << ", "
            << "Blue: " << setw(3) << blue << endl;
        }
};

int main()
{
    // create objects for each constructor type
    Color firstColor;
    Color secondColor(255,255,255);
    Color thirdColor(0);

    // output color 1
    cout << "Color 1: ";
    firstColor.print();

    // output color 2
    cout << "Color 2: ";
    secondColor.print();

    // output color 3
    cout << "Color 3: ";
    thirdColor.print();

    cout << endl;
    
    return 0; 
}