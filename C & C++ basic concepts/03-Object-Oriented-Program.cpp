#include<iostream>
#include<stdio.h>

using namespace std;

class Rectangle 
{ public:
    int length;
    int breadth;

    void initialize(int l, int b) {
        length = l;
        breadth = b;
    }
    int area() {
        return length * breadth;
    }
    int perimeter() {
        int p;
        p = 2 * (length + breadth);
        return p;

    }
};

int main()
{
    Rectangle r;
   
    int l,b;
    printf("Enter length and breadth of rectangle: ");
    cin >> l >> b;

    r.initialize(l, b);

    int a = r.area();
    int p = r.perimeter();

    printf("Area=%d\n", a);
    printf("Perimeter=%d\n", p);

    return 0;
}