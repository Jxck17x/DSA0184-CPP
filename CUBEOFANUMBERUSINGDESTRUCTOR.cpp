#include<iostream>
using namespace std;

class Cube {
private:
    int n;

public:
    Cube(int limit) : n(limit) {
        cout << "Cubes of numbers up to " << n << " are:" << endl;
        for (int i = 1; i <= n; i++) {
            cout << i * i * i << endl;
        }
    }

    ~Cube() {
        cout << "Object is destroyed" << endl;
    }
};

int main() {
    int limit;
    cout << "Enter the limit: ";
    cin >> limit;

    Cube c(limit);

    return 0;
}

