#include <iostream>
using namespace std;

class Cube {
private:
    int side;
    int volume;

public:
    void input();
    void calculateVolume();
    void output();
};

void Cube::input() {
    cout<<"Enter the side of Cube: ";
    cin >> side;
}

void Cube::calculateVolume() {
    volume = side * side * side;
}

void Cube::output() {
    cout << volume << endl;
}

int main() {
    Cube c2;
    c2.input();
    c2.calculateVolume();
    c2.output();
    return 0;
}

/*
OUTPUT
Enter the side of Cube: 9
729
*/
