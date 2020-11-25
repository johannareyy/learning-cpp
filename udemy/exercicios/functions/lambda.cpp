#include <iostream>
using namespace std;

auto add = [](int x, int y) -> int { return x + y; };
auto subtract = [](int x, int y) -> int { return x - y; };


int main() {
    cout << add(10, 20) << endl;
    cout << subtract(10, 26) << endl;

    return 0;
}