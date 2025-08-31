#include <iostream>

using namespace std;
enum class Direction : int {
    north =0,
    south =1,
    east =2,
    west =3,
};

int main() {
    Direction dir  = Direction :: north;
    if (dir == Direction :: north) {
        cout << "Hello world";
    }
}