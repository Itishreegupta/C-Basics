#include <iostream>
using namespace std;
int main(){
    float p,r,t;
    float SI;
    cout << "enter principal value : ";
    cin >> p;
    cout << "enter rate of intrest : ";
    cin >> r;
    cout << "enter time : ";
    cin >> t;
    SI = (p * r * t)/100;
    cout << "The number is : " << SI;
}