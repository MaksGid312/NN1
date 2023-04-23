#include <iostream> 
#include <string> 

using namespace std;

int sum(int a, int b) {
    return a + b;
}

int mult(int a, int b) {
    return a * b;
}
int main() {
    cout << "Enter 2 numbers: ";
    int a, b;
    cin >> a >> b;
    cout << sum(a, b) << endl;
    cout << mult(a, b) << endl;
    system("pause");
    return 0;
}