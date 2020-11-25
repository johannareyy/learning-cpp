//PI = 3.1415
//PI * radius * radius
#include <iostream>
using namespace std;

int main() {
    const double PI = 3.141592;
    double radius;

    cout << "Digite o raio: " << endl;
    cin >> radius;
    double area = PI * radius * radius;
    cout << "A área é: " << area;

    return 0;
}