#include <iostream>
using namespace std;
int main(){
    float l,b, perimeter,area;
    cout << "enter length : ";
    cin >> l;
    cout << "enter a breadth: ";
    cin >> b;
    area = l*b;
    perimeter = 2*(l+b);
    cout << "The perimeter of rectangle is : " << perimeter;
    cout << "The area of rectangle is : " << area;
}