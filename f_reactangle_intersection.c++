#include <iostream>
using namespace std;

// Structure to represent a rectangle
struct Rectangle {
    int x1, y1; 
    int x2, y2; 
};

bool doIntersect(Rectangle A, Rectangle B) {
    if (A.x2 < B.x1 || B.x2 < A.x1)
        return false;

    if (A.y1 > B.y2 || B.y1 > A.y2)
        return false;

    return true; 
}

int main() {
    Rectangle rect1, rect2;

    cout << "Enter bottom-left and top-right of Rectangle 1 (x1 y1 x2 y2): ";
    cin >> rect1.x1 >> rect1.y1 >> rect1.x2 >> rect1.y2;

    cout << "Enter bottom-left and top-right of Rectangle 2 (x1 y1 x2 y2): ";
    cin >> rect2.x1 >> rect2.y1 >> rect2.x2 >> rect2.y2;

    if (doIntersect(rect1, rect2))
        cout << "✅ Rectangles intersect." << endl;
    else
        cout << "❌ Rectangles do NOT intersect." << endl;

    return 0;
}
