/*
Hackerrank::Challenges:RectangleArea
description: https://www.hackerrank.com/challenges/rectangle-area
*/


#include ".././Challenges.h"
namespace hrs {
    namespace {
        using std::cout;
        using std::endl;
        using std::cin;
    }

    class Rectangle {
    protected:
        int width{ 0 };
        int height{ 0 };

    public:
        virtual void display() {
            cout << width << " " << height << endl;
        };
    };

    class RectangleArea : public Rectangle {
    public:
        void display() {
            cout << width * height << endl;
        };
        void read_input() {
            cin >> width >> height;
        }
    };

    void rectangleAreaChallenge() {
        RectangleArea r_area;
        r_area.read_input();
        r_area.Rectangle::display();
        r_area.display();
    }
}



