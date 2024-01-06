#include <iostream>
using namespace std;
int main(){
    float f,c;
    cout << "enter the temperature in fahrenheit : ";
    cin >> f;
    c = (f-32) * 5/9;
    cout << "the temperature in celcius is : " << c ;
}