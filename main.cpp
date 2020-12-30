#include <iostream>

using namespace std;

struct Point
{
    int x, y;
};

// find orientation of ordered triplet
// return 0: p, q and r are collinear
// return 1: clockwise
// return 2: counterclockwise
int orientation(Point p1, Point p2, Point p3)
{
    int val = (p2.y - p1.y) * (p3.x - p2.x) - (p3.y - p2.y) * (p2.x - p1.x);

    if (val == 0) return 0; // collinear

    return (val > 0) ? 1 : 2; // clockwise or counterclockwise
}

int main() {
    Point p1 = {0, 0}, p2 = {4, 4}, p3 = {1, 2};

    int ret = orientation(p1, p2, p3);

    if (ret == 0) cout << "Collinear";
    else if (ret == 1) cout << "Clockwise";
    else cout << "CounterClockwise";

    return 0;
}
