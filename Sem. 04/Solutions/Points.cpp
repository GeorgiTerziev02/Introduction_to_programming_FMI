#include <cmath>

const double EPSILON = 0.00001;

double distBetweenTwoPoints(int p1x, int p1y, int p2x, int p2y) {
    int dx = p1x - p2x;
    int dy = p1y - p2y;

    return sqrt(dx * dx + dy * dy);
}

bool myAbs(int n) {
    return n < 0 ? -n : n;
}

bool areOnOneCircleV1(int p1x, int p1y, int p2x, int p2y) {
    return myAbs(distBetweenTwoPoints(p1x, p1y, 0, 0) - distBetweenTwoPoints(p2x, p2y, 0, 0)) <= EPSILON;
}

// without epsilon
bool areOnOneCircleV2(int p1x, int p1y, int p2x, int p2y) {
    return p1x * p1x + p1y * p1y == p2x * p2x + p2y * p2y;
}