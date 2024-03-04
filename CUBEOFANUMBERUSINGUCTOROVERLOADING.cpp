#include<iostream>
using namespace std;
class Cube 
{
public:
    int i, n;

    Cube() {
        cout << "Enter the value: ";
        cin >> n;
        for (i = 1; i <= n; i++) {
            cout << i * i * i << endl;
        }
    }
};

int main() {
    Cube c;

    return 0;
}

